#ifndef MANUAL_H
#define MANUAL_H

#include <string>
#include <iostream>

class Manual {
public:
    std::string engine, seats, tripComputer, gps, color;
    bool hasSunroof = false;

    void listFeatures() const {
        std::cout << "Manual Features:\n";
        std::cout << "  Engine: " << engine << "\n";
        std::cout << "  Seats: " << seats << "\n";
        std::cout << "  TripComputer: " << tripComputer << "\n";
        std::cout << "  GPS: " << gps << "\n";
        std::cout << "  Color: " << color << "\n";
        std::cout << "  Sunroof: " << (hasSunroof ? "Yes" : "No") << "\n";
    }
};

#endif
