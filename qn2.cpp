#include <iostream>
#include <vector>
#include <algorithm>

// Function to find and print the divisors in decreasing order
void printDivisors(int number) {
    std::vector<int> divisors;

    // Find all divisors
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            divisors.push_back(i);
        }
    }

    // Print divisors in decreasing order
    for (auto it = divisors.rbegin(); it != divisors.rend(); ++it) {
        std::cout << *it << std::endl;
    }
}

int main() {
    int number;
    char response;

    std::cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << std::endl;
    std::cout << "The program will repeatedly prompt you to enter a positive integer." << std::endl;
    std::cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << std::endl;
    std::cout << "To terminate the program, enter a negative integer or zero." << std::endl;
    
    do {
        std::cout << "Please enter a positive integer: ";
        std::cin >> number;

        // Check if the input is a positive integer
        if (number > 0) {
            printDivisors(number);
            
            // Ask if the user wants to continue
            std::cout << "Would you like to see the divisors of another integer (Y/N)? ";
            std::cin >> response;
            response = tolower(response); // Convert to lowercase to simplify comparison
        } else {
            std::cout << number << " is not a positive integer." << std::endl;
            std::cout << "Please enter a positive integer." << std::endl;
        }

    } while (response == 'y');

    std::cout << "Program terminated. Goodbye!" << std::endl;
    return 0;
}
