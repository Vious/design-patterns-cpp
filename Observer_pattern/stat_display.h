#pragma once

#include <iostream>
#include <string>
#include "observer.h"
#include "subject.h"
#include "display.h"

namespace ObserverPattern
{
class StatDisplay : public Observer, public DisplayElement {
public:
    StatDisplay(const std::string name, Subject *sub) {
        this->name = name;
        sub_ = sub;
        sub_->registerObserver(this);
    }

    StatDisplay(const std::string name) {
        this->name = name;
    }

    void update(float temp, float humidity, float pressure) override;
    void display() override;
    void selfRegister(Subject *sub);
    void unRegister();


private:
    size_t counter = 0;
    float temperature = 0.0;
    float humidity = 0.0;
    float pressure = 0.0;

    Subject *sub_;
    std::string name;

};

void StatDisplay::update(float temp, float humidity, float pressure) {
    counter++;
    temperature = (temperature + temp) / counter;
    this->humidity = (this->humidity + humidity) / counter;
    this->pressure = (this->pressure + pressure) / counter;

    display();
}

void StatDisplay::display() {
    std::cout << "Stat Observer " << name << " avg data are: " << temperature << " F degress and " << humidity << " \% humidity, " << pressure << " pressure" << std::endl;
}

void StatDisplay::unRegister() {
    sub_->removeObserver(this);
}

void StatDisplay::selfRegister(Subject *sub) {
    sub_ = sub;
    sub_->registerObserver(this);
}



} // namespace ObserverPattern
