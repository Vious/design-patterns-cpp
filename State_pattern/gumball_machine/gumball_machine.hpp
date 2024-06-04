#pragma once

#include <iostream>
#include <vector>
#include <memory>


namespace stp {

class State;

class GumballMachine {
public:
    GumballMachine(int numGumballs) : count_(numGumballs) {
        init();
        state_ = noQuaState_;
    }

    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    // void dispense();

    void setState(State *newState);
    State *getHasQuartState();
    State *getNoQuartState();
    State *getSoldState();
    State *getSoldOutState();
    State *getWinnerState();
    
    void refill(int count) {
        this->count_ = count;
        state_ = noQuaState_;
    }

    int getCounter() {
        return count_; 
    }

    void releaseBall() {
        std::cout << "A gumball comes rolling out the slot." << std::endl;
        if (count_ != 0) {
            count_--;
        }
    }

    void PrintInfo() {
        std::cout << "Vious Xie, Inc." << std::endl;
        std::cout << "Simple Standing Gumball Model." << std::endl;
        std::cout << "Inventory: " << count_ << " gumballs" << std::endl;
        if (count_ != 0) {
            std::cout << "Machine is waiting for quarters." << std::endl;
        } else {
            std::cout << "Machine is sold out." << std::endl;
        }
    }

private:
    State *noQuaState_;
    State *hasQuaState_;
    State *soldState_;
    State *soldOutState_;
    State *winnerState_;
    State *state_=nullptr;
    int count_ = 0;

    void init();

};

}