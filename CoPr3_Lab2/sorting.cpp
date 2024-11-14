#include "sorting.h"
#include <iostream>
#include <vector>
#include <algorithm>

int main3() {
    std::vector<int> vec = { 5, 3, 8, 1, 9, 7, 2, 6, 10, 4 };

    std::sort(vec.begin(), vec.end(), std::greater<int>());

    std::cout << "Sorted in descending order:\n";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    return 0;
}
