#pragma once

#include <iostream>

#include "goose.h"
#include "../interface/quackable.h"

namespace compoundp {

class GooseAdapter : public Quackable {
public:
    GooseAdapter(goosePtr goose) : goose_(goose) {}

    void quack() override {
        goose_->honk();
    }

private:
    goosePtr goose_;

};

}