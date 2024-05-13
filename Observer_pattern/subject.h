#pragma once

#include "observer.h"

namespace ObserverPattern {

class Subject {
private:

public:

    virtual void registerObserver(Observer *obs) = 0;

    virtual void removeObserver(Observer *obs) = 0;

    virtual void notifyObservers() = 0;

};


}