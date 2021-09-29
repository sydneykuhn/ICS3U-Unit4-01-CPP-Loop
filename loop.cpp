// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Sep 2020
// This program calculates the sum of sequential numbers starting at 0

#include <iostream>
#include <string>

int main() {
    // this function uses a loop
    std::string userInputAsString;
    int userInput;
    int loopCounter = 0;
    int total = 0;

    // input
    std::cout << "Please enter a positive integer : ";
    std::cin >> userInputAsString;

    // process & output
    try {
        userInput = std::stoi(userInputAsString);
        while (loopCounter < userInput) {
            loopCounter = loopCounter + 1;
            total = total + loopCounter;
            }
        std::cout << "The sum of all positive numbers from 1 to " << ""
        << userInput << " is " "" << total << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid integer entered, please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
