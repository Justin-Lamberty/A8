#include <iostream>
#include "director.h"
#include "clientcode.h"

int main() {
    Director* director = new Director();
    auto [luxuryCar, luxuryManual] = ClientCode4(*director);

    delete luxuryCar;
    delete luxuryManual;
    delete director;
}
