#pragma once

#include <iostream>
#include <string>
#include "observer.h"
#include "display.h"
#include "subject.h"
#include "weather_data.h"

namespace ObserverPattern {

class CurrentCondDisplay : public Observer, public DisplayElement {
public:
    CurrentCondDisplay(const std::string name, Subject *sub) {
        this->name = name;
        sub_ = sub;
        sub_->registerObserver(this);
    }

    CurrentCondDisplay(const std::string name) {
        this->name = name;
    }

    void update(float temp, float humidity, float pressure) override;
    void display() override;
    void selfRegister(Subject *sub);
    void unRegister();

private:
    float temperature;
    float humidity;
    float pressure;

    Subject *sub_;
    std::string name;

};


void CurrentCondDisplay::update(float temp, float humidity, float pressure) {
    this->temperature = temp;
    this->humidity = humidity;
    this->pressure = pressure;
    display();
}

void CurrentCondDisplay::display() {
    std::cout << "Observer " << name << " current condition: " << temperature << " F degress and " << humidity << " \% humidity, " << pressure << " pressure" << std::endl;
}

void CurrentCondDisplay::unRegister() {
    sub_->removeObserver(this);
}

void CurrentCondDisplay::selfRegister(Subject *sub) {
    sub_ = sub;
    sub_->registerObserver(this);
}

} //namespace ObserverPattern