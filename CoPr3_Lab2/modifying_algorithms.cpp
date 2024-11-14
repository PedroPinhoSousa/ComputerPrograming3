#include "modifying_algorithms.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

// Global function definition
int random_value() {
    return rand() % 100;
}

// Functional object
struct RandomValue {
    int operator()() const {
        return rand() % 100;
    }
};

int main1() {
    std::vector<int> vec(10);

    // a. Using global function
    std::generate(vec.begin(), vec.end(), random_value);

    // Print generated values
    std::cout << "Generated with global function:\n";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    // b. Using lambda function
    std::generate(vec.begin(), vec.end(), []() { return rand() % 100; });

    std::cout << "Generated with lambda function:\n";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    // c. Using functional object
    std::generate(vec.begin(), vec.end(), RandomValue());

    std::cout << "Generated with functional object:\n";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    return 0;
}
