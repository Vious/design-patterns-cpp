#pragma once

#include <string>

namespace Starbuzz {
class Beverage {
public:
    virtual std::string getDescription() = 0;

    virtual double cost() = 0;

protected:
    std::string desciription;


};
} // namespace Starbuzz