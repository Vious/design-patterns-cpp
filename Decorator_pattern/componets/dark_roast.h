#pragma once

// #include "../beverage.hpp"
#include "../concrete_beverage.h"

namespace Starbuzz {
class DarkRoast: public ConcreteBeverage {
public:
    DarkRoast() {
        desciription = "Dark Roast";
    }

    double cost() {
        return .99;
    }

    // std::string getDescription() {
    //     return desciription;
    // }
};

}