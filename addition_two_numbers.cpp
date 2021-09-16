// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program calculates the sum of two numbers

#include <iostream>

int main() {
    // This function calculates the sum of two numbers
    int number_1;
    int number_2;
    int the_sum;

    // Input
    std::cout << "Enter the first number to add (integer): ";
    std::cin >> number_1;
    std::cout << "Enter the second number to add (integer): ";
    std::cin >> number_2;

    // Process
    the_sum = number_1 + number_2;

    // Output
    std::cout << "" << std::endl;
    std::cout << number_1 << " + " << number_2 << " = " << the_sum;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
