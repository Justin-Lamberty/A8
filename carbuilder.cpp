#include "carbuilder.h"
CarBuilder::CarBuilder() { reset(); }
CarBuilder::~CarBuilder() { delete car; }
void CarBuilder::reset() { car = new Car(); }
void CarBuilder::setEngine(std::string &engine) { car->engine = engine; }
void CarBuilder::setSeats(std::string &seats) { car->seats = seats; }
void CarBuilder::setTripComputer(std::string &tripComputer) { car->tripComputer = tripComputer; }
void CarBuilder::setGPS(std::string &gps) { car->gps = gps; }
Car* CarBuilder::GetProduct() { Car *result = car; reset(); return result; }
