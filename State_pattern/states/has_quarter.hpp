#pragma once

#include <cstdlib>
#include <ctime>

#include "state.hpp"

namespace stp {

class HasQuarterState : public State {
public:

    HasQuarterState(GumballMachine *gbMachine) : State(gbMachine) {}

    void insertQuarter() override {
        std::cout << "You cannot insert another quarter." << std::endl;
    }

    void ejectQuarter() override {
        std::cout << "Quarter returned." << std::endl;
        gumballMachine_->setState(gumballMachine_->getNoQuartState());
    }

    void turnCrank() override {
        std::cout << "You turned..." << std::endl;
        int randWinner = rand() % 10;
        if ((randWinner <= 2 ) && gumballMachine_->getCounter() > 1) {
            gumballMachine_->setState(gumballMachine_->getWinnerState());
        } else {
            gumballMachine_->setState(gumballMachine_->getSoldState());
        }
    }

    void dispense() override {
        std::cout << "No gumball dispensed." << std::endl;
    }

};

}