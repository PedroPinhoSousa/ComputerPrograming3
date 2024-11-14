#include "main.h"
#include <iostream>

// Declare the main functions from each file
int main1();
int main2();
int main3();
int main4();
int main5();

int main() {
    int choice;

    std::cout << "Choose which exercise to run (1 to 5)(0 for all): ";
    std::cin >> choice;

    switch (choice) {
    case 0:
        // Calls every main with output indicating the exercise number
        std::cout << "\n__________Running exercise 1:__________\n\n";
        main1();
        std::cout << "\n__________Running exercise 2:__________\n\n";
        main2();
        std::cout << "\n__________Running exercise 3:__________\n\n";
        main3();
        std::cout << "\n__________Running exercise 4:__________\n\n";
        main4();
        std::cout << "\n__________Running exercise 5:__________\n\n";
        main5();
        break;
    case 1:
        main1();  // Calls main from modifying_algorithms_main.cpp
        break;
    case 2:
        main2();  // Calls main from non_modifying_algorithm_main.cpp
        break;
    case 3:
        main3();  // Calls main from sorting_main.cpp
        break;
    case 4:
        main4();  // Calls main from remove_element_main.cpp
        break;
    case 5:
        main5();  // Calls main from multiply_elements_main.cpp
        break;
    default:
        std::cout << "Invalid choice. Please enter a number from 1 to 5.\n";
        break;
    }

    return 0;
}
