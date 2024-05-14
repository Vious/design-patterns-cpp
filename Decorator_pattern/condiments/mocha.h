#pragma once

#include "../beverage.hpp"
#include "../condiment_decorator.hpp"

namespace  Starbuzz
{
class Mocha : public CondimentDecorator {
public:
    Mocha(Beverage *beverage) {
        this->beverage = beverage;
    }

    std::string getDescription() {
        return this->beverage->getDescription() + ", Mocha";
    }

    double cost() {
        return .20 + beverage->cost();
    }

private:
    Beverage *beverage;


};


} // namespace  Starbuzz
