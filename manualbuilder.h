#ifndef MANUALBUILDER_H
#define MANUALBUILDER_H

#include "builder.h"
#include "manual.h"

class ManualBuilder : public Builder {
private:
    Manual* manual;

public:
    ManualBuilder() { reset(); }
    ~ManualBuilder() { delete manual; }

    void reset() override { manual = new Manual(); }
    void setEngine(const std::string& engine) override { manual->engine = engine; }
    void setSeats(const std::string& seats) override { manual->seats = seats; }
    void setTripComputer(const std::string& tripComputer) override { manual->tripComputer = tripComputer; }
    void setGPS(const std::string& gps) override { manual->gps = gps; }
    void setColor(const std::string& color) override { manual->color = color; }
    void setSunroof(bool hasSunroof) override { manual->hasSunroof = hasSunroof; }

    Manual* GetProduct() {
        Manual* result = manual;
        reset();
        return result;
    }
};

#endif
