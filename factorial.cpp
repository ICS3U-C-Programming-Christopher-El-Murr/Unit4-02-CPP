// Copyright (c) 2025 Christopher El-Mur
// All rights reserved
// Created by Christopher El-Mur
// Date: November 14th 2025
// This program asks the user to input a number
// Then uses a do..while loop to calculate the factorial of the number

#include <exception>
#include <iostream>
#include <string>

int main() {
    // ask user for input as a string and try to convert to an int
    std::string user_num_str;
    std::cout << "Please enter a positive integer: ";
    std::getline(std::cin, user_num_str);

    try {
        int user_num = std::stoi(user_num_str);
        if (user_num <= 0) {
            std::cout << "Please enter a positive integer." << std::endl;

            // initialize counter and factorial answer
        } else {
            int counter = 0;
            int factorial_answer = 1;

            do {
                counter++;
                factorial_answer *= counter;
            } while (counter < user_num);

            std::cout << "The factorial of " << user_num << " is "
            << factorial_answer << std::endl;
        }
        // check for errors
    } catch (const std::invalid_argument&) {
        std::cout << user_num_str << " Please enter a valid integer"
        << std::endl;
    } catch (const std::out_of_range&) {
        std::cout << user_num_str << " Please enter a valid integer"
        << std::endl;
    }
    std::cout << "Thanks for playing!" << std::endl;
}
