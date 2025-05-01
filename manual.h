#ifndef MANUAL_H
#define MANUAL_H

#include <string>

class Manual {
public:
    std::string engine, seats, tripComputer, gps, color;
    bool hasSunroof = false;
    void listFeatures() const;
};

#endif