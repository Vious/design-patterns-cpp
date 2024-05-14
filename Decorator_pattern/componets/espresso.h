#pragma once

#include "../concrete_beverage.h"

namespace Starbuzz {
class Espresso: public ConcreteBeverage {
public:
    Espresso() {
        desciription = "Espresso";
    }

    double cost() {
        return 1.99;
    }



};

}