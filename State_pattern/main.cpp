#include <iostream>

#include "states/state-inl.h"
#include "gumball_machine/gumball_machine.hpp"

using namespace stp;

int main() 
{
    srand(time(0));
    GumballMachine gm(10);
    
    gm.PrintInfo();

    // just testing
    gm.ejectQuarter();
    gm.turnCrank();
    gm.insertQuarter();
    gm.insertQuarter();
    gm.ejectQuarter();
    gm.ejectQuarter();

    gm.turnCrank();
    // end--just testing

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    std::cout << "Counter : " << gm.getCounter() << std::endl;

    gm.PrintInfo();

    gm.refill(5);

    gm.PrintInfo();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();

    gm.insertQuarter();
    gm.turnCrank();


    return 0;
}