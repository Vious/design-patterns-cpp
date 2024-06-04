#pragma once

#include "state.hpp"

namespace stp {

class SoldState : public State {
public:

    SoldState(GumballMachine *gbMachine) : State(gbMachine) {}

    void insertQuarter() override {
        std::cout << "Please wait, we're already giving you a gumball." << std::endl;
    }

    void ejectQuarter() override {
        std::cout << "Sorry, you already turned the crank." << std::endl;
    }

    void turnCrank() override {
        std::cout << "Turning twice doesn't give you another gumball!" << std::endl;
    }

    void dispense() override {
        gumballMachine_->releaseBall();
        if (gumballMachine_->getCounter() > 0) {
            gumballMachine_->setState(gumballMachine_->getNoQuartState());
        } else {
            std::cout << "Oops, out of gumballs!" << std::endl;
            gumballMachine_->setState(gumballMachine_->getSoldOutState());
        }

    }

};

}