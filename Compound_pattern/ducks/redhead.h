#pragma once

#include <iostream>

#include "../interface/quackable.h"

namespace compoundp {

class RedheadDuck : public Quackable {
public:
    void quack() override {
        std::cout << "RedheadDuck quack " << std::endl;
    }
};

}