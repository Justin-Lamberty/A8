#include "clientcode.h"

std::pair<Car*, Manual*> ClientCode4(Director& director) {
    auto carBuilder = new CarBuilder();
    auto manualBuilder = new ManualBuilder();

    director.makeLuxuryCar(carBuilder);
    director.makeLuxuryCar(manualBuilder);

    Car* car = carBuilder->GetProduct();
    Manual* manual = manualBuilder->GetProduct();

    delete carBuilder;
    delete manualBuilder;

    return {car, manual};
}
