#ifndef CARBUILDER_H
#define CARBUILDER_H

#include "builder.h"
#include "car.h"

class CarBuilder : public Builder {
private:
    Car* car;
public:
    CarBuilder();
    ~CarBuilder();
    void reset() override;
    void setEngine(const std::string& engine) override;
    void setSeats(const std::string& seats) override;
    void setTripComputer(const std::string& tripComputer) override;
    void setGPS(const std::string& gps) override;
    void setColor(const std::string& color) override;
    void setSunroof(bool hasSunroof) override;
    Car* GetProduct();
};

#endif