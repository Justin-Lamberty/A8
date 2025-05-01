#include "manual.h"
#include <iostream>

void Manual::listFeatures() const {
    std::cout << "Manual Features:\n";
    std::cout << "  Engine: " << engine << "\n";
    std::cout << "  Seats: " << seats << "\n";
    std::cout << "  TripComputer: " << tripComputer << "\n";
    std::cout << "  GPS: " << gps << "\n";
    std::cout << "  Color: " << color << "\n";
    std::cout << "  Sunroof: " << (hasSunroof ? "Yes" : "No") << "\n";
}