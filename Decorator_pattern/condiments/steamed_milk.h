#pragma once

#include "../beverage.hpp"
#include "../condiment_decorator.hpp"

namespace  Starbuzz
{
class SteamedMilk : public CondimentDecorator {
public:
    SteamedMilk(Beverage *beverage) {
        this->beverage = beverage;
    }

    std::string getDescription() {
        return this->beverage->getDescription() + ", Steamed Milk";
    }

    double cost() {
        return .10 + beverage->cost();
    }

private:
    Beverage *beverage;


};


} // namespace  Starbuzz
