#pragma once

#include <iostream>
#include <memory>
#include "../gumball_machine/gumball_machine.hpp"

namespace stp {

class GumballMachine;

class State {
public:
    explicit State(GumballMachine *gbMachine) : gumballMachine_(gbMachine) {}

    virtual void insertQuarter() = 0;
    
    virtual void ejectQuarter() = 0;

    virtual void turnCrank() = 0;

    virtual void dispense() = 0;

    GumballMachine *gumballMachine_;

};

}
