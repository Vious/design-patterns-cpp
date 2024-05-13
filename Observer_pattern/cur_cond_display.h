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
    CurrentCondDisplay(const std::string name, WeatherData *wd) {
        this->name = name;
        wd_ = wd;
        wd_->registerObserver(this);
    }

    CurrentCondDisplay(const std::string name) {
        this->name = name;
    }

    void update(float temp, float humidity, float pressure) override;
    void display() override;
    void selfRegister(WeatherData *wd);
    void unRegister();

private:
    float temperature;
    float humidity;
    float pressure;

    WeatherData *wd_;
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
    wd_->removeObserver(this);
}

void CurrentCondDisplay::selfRegister(WeatherData *wd) {
    wd_ = wd;
    wd_->registerObserver(this);
}

} //namespace ObserverPattern