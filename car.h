#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
public:
    std::string engine, seats, tripComputer, gps, color;
    bool hasSunroof = false;

    void listFeatures() const {
        std::cout << "Car Features:\n";
        std::cout << "  Engine: " << engine << "\n";
        std::cout << "  Seats: " << seats << "\n";
        std::cout << "  TripComputer: " << tripComputer << "\n";
        std::cout << "  GPS: " << gps << "\n";
        std::cout << "  Color: " << color << "\n";
        std::cout << "  Sunroof: " << (hasSunroof ? "Yes" : "No") << "\n";
    }
};

#endif