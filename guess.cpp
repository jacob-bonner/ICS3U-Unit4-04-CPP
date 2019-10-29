// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: October 2019
// This is guess the number program with a random number generator

#include <stdlib.h>
#include <ctime>
#include <iostream>

int main() {
    // This function allows the user to try and guess the number

    // Random number seed
    unsigned int seed = time(NULL);

    // variables
    int correctNumber = rand_r(&seed) % 10;
    std::string userGuessString;
    int userGuessNumber;

    while (true) {
        // Input
        std::cout << "Guess the number between 0 & 9 (integer):" << std::endl;
        std::cin >> userGuessString;
        std::cout << "" << std::endl;

        // Process
        try {
            userGuessNumber = std::stoi(userGuessString);
            if (userGuessNumber == correctNumber) {
                std::cout << "You correctly guessed the number!" << std::endl;
                break;
            } else {
                std::cout << "Wrong number, try again!" << std::endl;
                std::cout << "" << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "That was not an integer";
            std::cout << "" << std::endl;
        }
    }
}
