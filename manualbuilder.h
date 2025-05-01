#ifndef MANUALBUILDER_H
#define MANUALBUILDER_H

#include "builder.h"
#include "manual.h"

class ManualBuilder : public Builder {
private:
    Manual* manual;
public:
    ManualBuilder();
    ~ManualBuilder();
    void reset() override;
    void setEngine(const std::string& engine) override;
    void setSeats(const std::string& seats) override;
    void setTripComputer(const std::string& tripComputer) override;
    void setGPS(const std::string& gps) override;
    void setColor(const std::string& color) override;
    void setSunroof(bool hasSunroof) override;
    Manual* GetProduct();
};

#endif