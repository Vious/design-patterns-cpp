#pragma once

#include "../beverage.hpp"
#include "../condiment_decorator.hpp"

namespace  Starbuzz
{
class Soy : public CondimentDecorator {
public:
    Soy(Beverage *beverage) {
        this->beverage = beverage;
    }

    std::string getDescription() {
        return this->beverage->getDescription() + ", Soy";
    }

    double cost() {
        return .15 + beverage->cost();
    }

private:
    Beverage *beverage;


};


} // namespace  Starbuzz
