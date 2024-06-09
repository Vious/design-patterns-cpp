#pragma once

#include <memory>

#include "../counter/quack_counter.h"
#include "abstract_fact.hpp"

namespace compoundp {

class CountingDuckFactory: public AbstractDuckFactory {
public:
    virtual quackPtr createMallardDuck() override {
        return std::make_shared<QuackCounter>(std::make_shared<MallardDuck>());
    }
    virtual quackPtr createRedheadDuck() override {
        return std::make_shared<QuackCounter>(std::make_shared<RedheadDuck>());
    }
    virtual quackPtr createDuckCall() override {
        return std::make_shared<QuackCounter>(std::make_shared<DuckCall>());
    }
    virtual quackPtr createRubberDuck() override {
        return std::make_shared<QuackCounter>(std::make_shared<RubberDuck>());
    }

};

}