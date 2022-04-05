// Copyright (c) 2022. Paterry Baptichon All rights reserved.
//
// Created by: Paterry Baptichon Junior
// Created on: 2022-04-05
// This is a program which tells you if you number is - or +.

#include <iostream>

int main() {
    // This is what runs the game.
    int number;

    //  this is where the user enters a number
        std::cout << "enter a number: ";
        std::cin >> number;
        std::cout << "" << std::endl;
        // Processes that if user
        // number is higher than 0
        // or bellow it shows weather
        // it is positive or negative.
        if (number == 0) {
            // prints " 0 is just zero"
            std::cout << "(0) is just zero" << std::endl;
            // Processes that if user number is lower
        } else if (number < 0) {
            // prints " this integer is negative"
            std::cout << "this integer is negative" << std::endl;
        } else if (number > 0) {
            // prints " this integer is positive"
            std::cout << "this integer is positive" << std::endl;
        }
    }
