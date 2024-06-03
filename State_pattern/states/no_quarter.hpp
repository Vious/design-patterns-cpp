#pragma once

#include "state.hpp"

namespace stp {

class NoQuarterState : public State {
public:

    NoQuarterState(ctxPtr gbMachine) : State(gbMachine) {}

    void insertQuarter() override {

    }

    void ejectQuarter() override {

    }

    void turnCrank() override {

    }

    void dispense() override {

    }

};


}