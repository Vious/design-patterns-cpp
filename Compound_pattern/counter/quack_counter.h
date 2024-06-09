#pragma once

#include "../interface/quackable.h"

namespace compoundp {

class QuackCounter : public Quackable {
public:
    QuackCounter(quackPtr duck) : duck_(duck) {}

    void quack() {
        duck_->quack();
        numOfQuacks_++;
    }

    static int getQuacks() {
        return numOfQuacks_;
    }

private:
    quackPtr duck_;
    static int numOfQuacks_;

};

inline int QuackCounter::numOfQuacks_ = 0;

}