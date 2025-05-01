#include "director.h"

void Director::makeSUV(Builder* builder) {
    builder->setEngine("SUV Engine");
    builder->setSeats("5");
    builder->setTripComputer("Advanced Trip Computer");
    builder->setGPS("Advanced GPS");
    builder->setColor("gray");
    builder->setSunroof(false);
}

void Director::makeSportsCar(Builder* builder) {
    builder->setEngine("Sports Engine");
    builder->setSeats("2");
    builder->setTripComputer("Trip Computer");
    builder->setGPS("Basic GPS");
    builder->setColor("red");
    builder->setSunroof(false);
}

void Director::makeLuxuryCar(Builder* builder) {
    builder->setEngine("V8 Engine");
    builder->setSeats("4");
    builder->setTripComputer("Luxury Trip Computer");
    builder->setGPS("Luxury GPS");
    builder->setColor("black");
    builder->setSunroof(true);
}
