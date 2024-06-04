#pragma once

#include "state.hpp"

namespace stp {

class SoldOutState : public State {
public:

    SoldOutState(GumballMachine *gbMachine) : State(gbMachine) {}

    void insertQuarter() override {
        std::cout << "You cannot insert a quarter, the machine is sold out." << std::endl;
    }

    void ejectQuarter() override {
        std::cout << "Sorry, you haven't inserted a quarter, also the machine is sold out." << std::endl;
    }

    void turnCrank() override {
        std::cout << "You turned, but there is no gumballs." << std::endl;
    }

    void dispense() override {
        std::cout << "No gumball dispensed." << std::endl;
    }

};

}