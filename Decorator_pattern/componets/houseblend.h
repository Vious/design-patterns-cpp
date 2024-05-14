#pragma once

#include "../concrete_beverage.h"

namespace Starbuzz {
class HouseBlend: public ConcreteBeverage {
public:
    HouseBlend() {
        desciription = "House Blend Coffee";
    }

    double cost() {
        return .89;
    }
    

};

}