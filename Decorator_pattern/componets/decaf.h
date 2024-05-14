#pragma once

#include "../concrete_beverage.h"

namespace Starbuzz {
class Decaf: public ConcreteBeverage {
public:
    Decaf() {
        desciription = "Decaf";
    }

    double cost() {
        return 1.05;
    }


};

}