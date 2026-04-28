#pragma once

#include <map>
#include <optional>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "Clause.h"

struct Problem {
    std::vector<Clause> usable;
    std::vector<Clause> sos;
};

struct RunResult {
    bool refuted = false;
    bool timed_out = false;
    std::string reason;
    Clause final_clause;
};

class ATP {
public:
    explicit ATP(Problem problem);

    RunResult run_anl_loop(int timeout_seconds);
    bool write_proof(const std::string& output_path, const Clause& final_clause) const;

private:
    Problem problem_;
    std::vector<Clause> usable_;
    std::vector<Clause> sos_;
    std::map<int, Clause> clause_index_;
    std::unordered_set<std::string> seen_signatures_;
    std::unordered_map<std::string, std::vector<int>> usable_head_index_;
    std::unordered_map<std::string, std::vector<int>> sos_head_index_;
    std::unordered_set<int> usable_ids_;
    std::unordered_set<int> sos_ids_;
    int next_clause_id_ = 1;
    bool has_equality_ = false;

    void index_existing_clause(Clause clause);
    Clause take_given_clause();
    std::vector<Clause> derive_inferences(const Clause& given, const Clause& other);
    std::vector<Clause> resolve_clauses(const Clause& left, const Clause& right);
    std::vector<Clause> factor_clause(const Clause& clause);
    std::vector<Clause> paramodulate(const Clause& equality_clause, const Clause& target_clause);
    bool is_subsumed(const Clause& candidate) const;
    bool clause_subsumes(const Clause& subsumer, const Clause& subsumed) const;
    bool add_to_sos(Clause clause);
    Clause finalize_clause(Clause clause);
    void add_clause_to_index(const Clause& clause, bool usable_pool);
    void remove_clause_from_sos_index(const Clause& clause);
    std::vector<int> candidate_subsumer_ids(const Clause& candidate, bool usable_pool) const;
};
