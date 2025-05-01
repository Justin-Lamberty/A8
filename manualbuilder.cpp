#include "manualbuilder.h"
ManualBuilder::ManualBuilder() { reset(); }
ManualBuilder::~ManualBuilder() { delete manual; }
void ManualBuilder::reset() { manual = new Manual(); }
void ManualBuilder::setEngine(std::string &engine) { manual->engine = engine; }
void ManualBuilder::setSeats(std::string &seats) { manual->seats = seats; }
void ManualBuilder::setTripComputer(std::string &tripComputer) { manual->tripComputer = tripComputer; }
void ManualBuilder::setGPS(std::string &gps) { manual->gps = gps; }
Manual* ManualBuilder::GetProduct() { Manual *result = manual; reset(); return result; }