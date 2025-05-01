#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
public:
    std::string engine, seats, tripComputer, gps, color;
    bool hasSunroof = false;
    void listFeatures() const;
};

#endif