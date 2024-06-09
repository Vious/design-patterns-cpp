#pragma once

#include <memory>


namespace compoundp {

// class Observer;

// using obsPtr = std::shared_ptr<Observer>;

// class QuackObservable {
// public:
//     virtual void registerObserver(obsPtr observer) = 0;

//     virtual void notifyObservers() = 0;

// };

class Quackable {
public:
    virtual void quack() = 0;
};

// using quackObPtr = std::shared_ptr<QuackObservable>;

using quackPtr = std::shared_ptr<Quackable>;

}