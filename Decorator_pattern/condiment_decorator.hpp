#pragma once

#include "beverage.hpp"

namespace Starbuzz {
class CondimentDecorator: public Beverage {
public:
    std::string getDescription() {
        return desciription;
    }

    double cost() {
        return .0;
    }
};

}