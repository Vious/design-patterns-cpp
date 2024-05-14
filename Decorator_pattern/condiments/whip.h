#pragma once

#include "../beverage.hpp"
#include "../condiment_decorator.hpp"

namespace  Starbuzz
{
class Whip : public CondimentDecorator {
public:
    Whip(Beverage *beverage) {
        this->beverage = beverage;
    }

    std::string getDescription() {
        return this->beverage->getDescription() + ", Whip";
    }

    double cost() {
        return .10 + beverage->cost();
    }

private:
    Beverage *beverage;


};


} // namespace  Starbuzz
