#include "non_modifying_algorithm.h"
#include <iostream>
#include <vector>
#include <algorithm>

int main2() {
    std::vector<int> vec = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

    int even_count = std::count_if(vec.begin(), vec.end(), [](int n) { return n % 2 == 0; });

    std::cout << "Count of even values: " << even_count << "\n";

    return 0;
}
