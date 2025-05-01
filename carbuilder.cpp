#include "carbuilder.h"

CarBuilder::CarBuilder() { reset(); }
CarBuilder::~CarBuilder() { delete car; }

void CarBuilder::reset() { car = new Car(); }

void CarBuilder::setEngine(const std::string& engine) { car->engine = engine; }
void CarBuilder::setSeats(const std::string& seats) { car->seats = seats; }
void CarBuilder::setTripComputer(const std::string& tripComputer) { car->tripComputer = tripComputer; }
void CarBuilder::setGPS(const std::string& gps) { car->gps = gps; }
void CarBuilder::setColor(const std::string& color) { car->color = color; }
void CarBuilder::setSunroof(bool hasSunroof) { car->hasSunroof = hasSunroof; }

Car* CarBuilder::GetProduct() {
    Car* result = car;
    reset();
    return result;
}
