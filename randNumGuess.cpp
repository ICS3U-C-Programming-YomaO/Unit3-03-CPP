// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date: October, 2025
// This program plays a random number guessing game with user

#include <cstdlib>
#include <iostream>

int main() {
    // declare integer to hold random number

    int someRandomNumber;
    int guess;

    // initialize random seed

    srand((unsigned)time(NULL));

    // generate a random number between 0 and 9

    someRandomNumber = rand() % 9 + 0;

    std::cout << someRandomNumber << std::endl;
    // ask user to guess number
    std::cout << "Guess a number between 0 - 9: ";
    std::cin >> guess;
    std::cout << "" << std::endl;

    // use if statements to check answer
    if (guess == someRandomNumber) {
        // output
        std::cout << "You guessed correctly";
    } else {
        // output
        std::cout << "Incorrect, the correct number was: "
        << someRandomNumber << std::endl;
    }
}
