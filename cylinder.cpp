// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Oct 2021
// This program asks the user for their radius and height of cylinder
// and outputs the volume

#include <iostream>
#include <cmath>

float VolumeCylinder(int radius, int height) {
    // calculate volume
    float volume;

    // process
    volume = (M_PI * pow(radius, 2) * height);

    return volume;
}

int main() {
    // this function calls the precedent function
    std::string radiusUser;
    int radiusUserInt;
    std::string heightUser;
    int heightUserInt;
    float CalculatedVolume;

    // input & output
    std::cout << "Enter the radius of the cylinder (mm): ";
    std::cin >> radiusUser;

    std::cout << "Enter the height of the cylinder (mm): ";
    std::cin >> heightUser;

    try {
        radiusUserInt = std::stoi(radiusUser);
        heightUserInt = std::stoi(heightUser);
        // call function
        CalculatedVolume = VolumeCylinder(radiusUserInt, heightUserInt);
        std::cout << "" << std::endl;
        std::cout << "The volume of the cylinder is "
        << CalculatedVolume << " mm³";
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "Theses are invalid numbers.";
    }
        std::cout << "" << std::endl;
        std::cout << "\nDone." << std::endl;
}
