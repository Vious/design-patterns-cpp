#pragma once

#include <iostream>
#include <vector>

#include "states/state-inl.h"

namespace stp {

using statePtr = std::shared_ptr<State>;

class GumballMachine : public std::enable_shared_from_this<GumballMachine> {
public:
    GumballMachine(int numGumballs) : count_(numGumballs) {
        noQuaState_ = std::make_shared<NoQuarterState>(shared_from_this());
    }

    void setState() {
        state_ = std::make_shared<NoQuarterState>(this);
    }

private:
    statePtr noQuaState_;
    statePtr state_;
    int count_ = 0;

};

}