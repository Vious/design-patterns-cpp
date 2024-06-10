#pragma once

#include <vector>
#include <algorithm>

#include "../interface/quackable.h"

namespace compoundp {

class Flock : public Quackable {
public:

    void add(quackPtr quacker) {
        quackers_.emplace_back(quacker);
    }

    void quack() {
        for (auto iter = quackers_.begin(); iter != quackers_.end(); iter++) {
            (*iter)->quack();
        }
    }

private:
    std::vector<quackPtr> quackers_;

};

}