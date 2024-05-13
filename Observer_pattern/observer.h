#pragma once

namespace ObserverPattern {

class Observer {
public:
    // in c++, we can set class with virtual functions to act as interface
    // Observer() = default;
    virtual void update(float temp, float humidity, float pressure) = 0;

};

} // namespace ObserverPattern