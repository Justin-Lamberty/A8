#include "manualbuilder.h"

ManualBuilder::ManualBuilder() { reset(); }
ManualBuilder::~ManualBuilder() { delete manual; }

void ManualBuilder::reset() { manual = new Manual(); }

void ManualBuilder::setEngine(const std::string& engine) { manual->engine = engine; }
void ManualBuilder::setSeats(const std::string& seats) { manual->seats = seats; }
void ManualBuilder::setTripComputer(const std::string& tripComputer) { manual->tripComputer = tripComputer; }
void ManualBuilder::setGPS(const std::string& gps) { manual->gps = gps; }
void ManualBuilder::setColor(const std::string& color) { manual->color = color; }
void ManualBuilder::setSunroof(bool hasSunroof) { manual->hasSunroof = hasSunroof; }

Manual* ManualBuilder::GetProduct() {
    Manual* result = manual;
    reset();
    return result;
}
