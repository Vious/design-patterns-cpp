#pragma once

#include <iostream>

#include "../interface/quackable.h"

namespace compoundp {

class MallardDuck : public Quackable {
public:
    void quack() override {
        std::cout << "MallardDuck quack " << std::endl;
    }
};

}