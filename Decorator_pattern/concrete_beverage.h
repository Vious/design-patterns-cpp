#pragma once

#include "beverage.hpp"

namespace Starbuzz {
class ConcreteBeverage: public Beverage {
public:
    std::string getDescription() {return desciription;};

    virtual double cost() = 0;

};
} // namespace Starbuzz