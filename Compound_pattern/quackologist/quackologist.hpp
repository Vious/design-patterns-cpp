#pragma once

#include <iostream>

#include "../interface/observer.h"

namespace compoundp {

class Quackologist : public Observer {
public:
    void update(quackObPtr duck) override {
        std::cout << "To Quackologist: " << duck << " just quacked." << std::endl;
    }
};


}