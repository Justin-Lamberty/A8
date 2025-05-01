#ifndef CARBUILDER_H
#define CARBUILDER_H

#include "builder.h"
#include "car.h"

class CarBuilder : public Builder {
private:
    Car* car;

public:
    CarBuilder() { reset(); }
    ~CarBuilder() { delete car; }

    void reset() override { car = new Car(); }
    void setEngine(const std::string& engine) override { car->engine = engine; }
    void setSeats(const std::string& seats) override { car->seats = seats; }
    void setTripComputer(const std::string& tripComputer) override { car->tripComputer = tripComputer; }
    void setGPS(const std::string& gps) override { car->gps = gps; }
    void setColor(const std::string& color) override { car->color = color; }
    void setSunroof(bool hasSunroof) override { car->hasSunroof = hasSunroof; }

    Car* GetProduct() {
        Car* result = car;
        reset();
        return result;
    }
};

#endif
