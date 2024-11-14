#include "multiply_elements.h"
#include <iostream>
#include <vector>
#include <algorithm>

int main5() {
    std::vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = 5;
    std::vector<int> result(vec.size());

    std::transform(vec.begin(), vec.end(), result.begin(), [n](int x) { return x * n; });

    std::cout << "Vector after multiplying by " << n << ":\n";
    for (int val : result) std::cout << val << " ";
    std::cout << "\n";

    return 0;
}
