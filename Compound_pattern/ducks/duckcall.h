#pragma once

#include <iostream>

#include "../interface/quackable.h"

namespace compoundp {

class DuckCall : public Quackable {
public:
    void quack() override {
        std::cout << "DuckCall Kwak " << std::endl;
    }
};

}