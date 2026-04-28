#pragma once

#include <chrono>
#include <cstdint>
#include <iosfwd>
#include <string>

class Profiler {
public:
    static void set_enabled(bool enabled);
    static bool enabled();
    static void add_sample(const std::string& name, std::chrono::nanoseconds elapsed);
    static void print_report(std::ostream& output);
};

class ScopedProfile {
public:
    explicit ScopedProfile(const char* name);
    ~ScopedProfile();

private:
    const char* name_;
    bool active_ = false;
    std::chrono::steady_clock::time_point start_;
};
