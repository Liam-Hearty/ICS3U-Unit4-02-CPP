// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program uses a while loop to add all whole numbers from 1 to the
// chosen_number


#include <iostream>


// This function uses a while loop
int main() {
    int loop_counter = 0;
    int adding_number = 1;
    std::string chosen_number_as_string;
    int chosen_number;

    std::cout << "Input a positive integer: " << std::endl;
    std::cin >> chosen_number_as_string;
    std::cout << "" << std::endl;

    try {
        // Input
        chosen_number = std::stoi(chosen_number_as_string);

        // Process and output
        do {
            std::cout << loop_counter << " times through loop." << std::endl;
            loop_counter = loop_counter + 1;
            adding_number = adding_number * loop_counter;
        } while (loop_counter < chosen_number);
            std::cout << "" << std::endl;
            std::cout << adding_number << std::endl;
    } catch(std::invalid_argument) {
        std::cout << "Please type in a whole number." << std::endl;
    }
}
