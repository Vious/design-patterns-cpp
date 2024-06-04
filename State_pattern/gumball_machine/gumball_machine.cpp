#include "gumball_machine.hpp"
#include "../states/state-inl.h"

namespace stp {

void GumballMachine::insertQuarter() {
    state_->insertQuarter();
}

void GumballMachine::ejectQuarter() {
    state_->ejectQuarter();
}

void GumballMachine::turnCrank() {
    state_->turnCrank();
    state_->dispense();
}

// void GumballMachine::dispense() {
//     state_->dispense();
// }



void GumballMachine::setState(State *newState) {
    state_ = newState;
}

State *GumballMachine::getHasQuartState() {
    return hasQuaState_;
}

State *GumballMachine::getNoQuartState() {
    return noQuaState_;
}

State *GumballMachine::getSoldState() {
    return soldState_;
}

State* GumballMachine::getSoldOutState() {
    return soldOutState_;
}

State* GumballMachine::getWinnerState() {
    return winnerState_;
}

void GumballMachine::init() {
    noQuaState_ = new NoQuarterState(this);
    hasQuaState_ = new HasQuarterState(this);
    soldState_ = new SoldState(this);
    soldOutState_ = new SoldOutState(this);
    winnerState_ = new WinnerState(this);
    state_ = noQuaState_;
}


}