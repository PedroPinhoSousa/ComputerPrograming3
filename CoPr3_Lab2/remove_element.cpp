#include "remove_element.h"
#include <iostream>
#include <vector>

int main4() {
    std::vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Remove the 5th element (index 4)
    vec.erase(vec.begin() + 4);

    std::cout << "Vector after removing the 5th element:\n";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    return 0;
}
