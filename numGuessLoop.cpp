// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan
// Date: May 26, 2021
// This program asks the user to guess a number between 0 to 9
// and tells the user if the guess is right or wrong

#include <iostream>
#include <random>

int main() {
    int correctGuess;
    int userNumInt;
    std::string userNumString;
while (true) {
  // get the user's guess
  std::cout << "Enter a whole number between 0 to 9: ";
  std::cin >> userNumString;
  std::cout << "" << std::endl;
  // generate a number between 0 to 9
  std::random_device rseed;
  std::mt19937 rgen(rseed());
  std::uniform_int_distribution<int> idist(0, 9);
  correctGuess = idist(rgen);
  try {
      userNumInt = std::stoi(userNumString);
      // calculates the square of each number from 0 to the user number
      if (userNumInt == correctGuess) {
          std::cout << "\n";
          std::cout << "You are correct. Thank you for playing" << std::endl;
          break;
      } else {
          std::cout << "\n";
          std::cout << "You are not correct. Please try again!" << std::endl;
          std::cout << "\n";
      }
      // make sure to catch errors such as anything but an integer
      } catch (std::invalid_argument) {
          // The user did not enter an integer.
          std::cout << "\n";
          std::cout << "Please enter a valid number.\n";
      }
}
}
