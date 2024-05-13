#pragma once

#include <vector>
#include <algorithm>

#include "subject.h"
#include "observer.h"


namespace ObserverPattern
{
class WeatherData : public Subject  {
public:
    WeatherData() = default;

    void registerObserver(Observer *obs) override;
    void removeObserver(Observer *obs) override;
    void notifyObservers() override;

    void setMeasurements(float temp, float humid, float pressure);
    void measurmentsChanged();


private:
    std::vector<Observer *> observers;
    float temperature;
    float humidity;
    float pressure;

};


void WeatherData::registerObserver(Observer *obs) {
    observers.emplace_back(obs);
}

void WeatherData::removeObserver(Observer *obs) {
    auto iter = std::find(observers.begin(), observers.end(), obs);
    if (iter != observers.end()) {
        observers.erase(iter);
    }
}

void WeatherData::notifyObservers() {
    for (auto obs : observers) {
        obs->update(temperature, humidity, pressure);
    }
}

void WeatherData::measurmentsChanged() {
    notifyObservers();
}

void WeatherData::setMeasurements(float temp, float humid, float pressure) {
    this->temperature = temp;
    this->humidity = humid;
    this->pressure = pressure;
    measurmentsChanged();
}

} // namespace ObserverPattern