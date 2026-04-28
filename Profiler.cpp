#include "Profiler.h"

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
#include <mutex>
#include <vector>

namespace {

struct Sample {
    std::uint64_t calls = 0;
    std::chrono::nanoseconds total{0};
};

bool g_enabled = false;
std::mutex g_mutex;
std::map<std::string, Sample> g_samples;

}  // namespace

void Profiler::set_enabled(bool enabled) {
    g_enabled = enabled;
}

bool Profiler::enabled() {
    return g_enabled;
}

void Profiler::add_sample(const std::string& name, std::chrono::nanoseconds elapsed) {
    if (!g_enabled) {
        return;
    }

    std::lock_guard<std::mutex> lock(g_mutex);
    Sample& sample = g_samples[name];
    sample.calls += 1;
    sample.total += elapsed;
}

void Profiler::print_report(std::ostream& output) {
    if (!g_enabled) {
        return;
    }

    std::vector<std::pair<std::string, Sample>> rows;
    {
        std::lock_guard<std::mutex> lock(g_mutex);
        rows.assign(g_samples.begin(), g_samples.end());
    }

    std::sort(
        rows.begin(),
        rows.end(),
        [](const auto& left, const auto& right) {
            return left.second.total > right.second.total;
        }
    );

    output << "% Profiling report\n";
    output << "% function,calls,total_ms,avg_us\n";
    for (const auto& row : rows) {
        const double total_ms = static_cast<double>(row.second.total.count()) / 1000000.0;
        const double avg_us = row.second.calls == 0
            ? 0.0
            : static_cast<double>(row.second.total.count()) / 1000.0 / static_cast<double>(row.second.calls);
        output << "% " << row.first << "," << row.second.calls << ","
               << std::fixed << std::setprecision(3) << total_ms << ","
               << std::fixed << std::setprecision(3) << avg_us << "\n";
    }
}

ScopedProfile::ScopedProfile(const char* name) : name_(name) {
    if (Profiler::enabled()) {
        active_ = true;
        start_ = std::chrono::steady_clock::now();
    }
}

ScopedProfile::~ScopedProfile() {
    if (!active_) {
        return;
    }

    const auto elapsed = std::chrono::steady_clock::now() - start_;
    Profiler::add_sample(name_, std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed));
}
