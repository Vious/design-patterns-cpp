#pragma once

#include <iostream>

namespace stp {

enum machineState{SOLD_OUT, NO_QUARTER, HAS_QUARTER, SOLD};

class GumballMachine {
public:

private:
    machineState state_;

};

}