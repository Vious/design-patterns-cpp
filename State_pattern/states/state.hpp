#pragma once

#include <iostream>
#include <memory>

namespace stp {

class GumballMachine;

using ctxPtr = std::shared_ptr<GumballMachine>;

class State {
public:
    explicit State(ctxPtr gbMachine) : gumballMachine_(gbMachine) {}

    virtual void insertQuarter() = 0;
    
    virtual void ejectQuarter() = 0;

    virtual void turnCrank() = 0;

    virtual void dispense() = 0;

private:
    ctxPtr gumballMachine_;

};

}