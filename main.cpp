#include "director.h"
#include "clientcode.h"
#include <iostream>

int main() {
    Director* director = new Director();
    auto [luxuryCar, luxuryManual] = ClientCode4(*director);

    std::cout << "Hello\n";
    std::cout << luxuryCar->engine << "\n";
    luxuryCar->listFeatures();
    luxuryManual->listFeatures();

    delete luxuryCar;
    delete luxuryManual;
    delete director;
}
