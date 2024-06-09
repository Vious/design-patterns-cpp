#pragma once

#include <iostream>

#include "../interface/quackable.h"

namespace compoundp {

class RubberDuck : public Quackable {
public:
    void quack() override {
        std::cout << "RubberDuck Squeak " << std::endl;
    }
};

}