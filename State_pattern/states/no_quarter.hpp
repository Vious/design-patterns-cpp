#pragma once

#include <iostream>

#include "state.hpp"

namespace stp {

class NoQuarterState : public State {
public:

    NoQuarterState(GumballMachine *gbMachine) : State(gbMachine) {}

    void insertQuarter() override {
        std::cout << "You inserted a quarter." << std::endl;
        gumballMachine_->setState(gumballMachine_->getHasQuartState());
    }

    void ejectQuarter() override {
        std::cout << "You haven't inserted a quarter." << std::endl;
    }

    void turnCrank() override {
        std::cout << "You turned, but there's no quarter." << std::endl;
    }

    void dispense() override {
        std::cout << "You need to pay first." << std::endl;
    }

};

}