#pragma once

#include <vector>
#include <algorithm>

#include "../interface/quackable.h"
#include "../interface/observer.h"

namespace compoundp {

class Observable : public QuackObservable {
public:
    Observable(quackObPtr duck) : duck_(duck) {}

    void registerObserver(obsPtr observer) override {
        observers_.push_back(observer);
    }


    void notifyObservers() {
        for (auto iter = observers_.begin(); iter != observers_.end(); iter++) {
            iter->update(duck_);
        }

    }


private:
    std::vector<obsPtr> observers_;
    quackObPtr duck_;

};

}