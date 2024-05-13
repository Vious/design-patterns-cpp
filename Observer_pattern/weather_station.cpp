#include <iostream>
#include <vector>
#include <string>
#include "weather_data.h"
#include "cur_cond_display.h"

int main() 
{
    ObserverPattern::WeatherData *weatherStation = new ObserverPattern::WeatherData();
    std::vector<std::string> names{"A1", "B1", "C1", "D1"};

    ObserverPattern::CurrentCondDisplay obs1(names[0], weatherStation);
    ObserverPattern::CurrentCondDisplay obs2(names[1], weatherStation);
    ObserverPattern::CurrentCondDisplay obs3(names[2], weatherStation);

    // weatherStation->registerObserver(&obs1);
    // weatherStation->registerObserver(&obs2);
    // weatherStation->registerObserver(&obs3);

    
    std::cout << "Changing for the first time: ...\n";
    weatherStation->setMeasurements(20.5, 79.0, 50.0);
    std::cout << "Changing for the second time: ...\n";
    weatherStation->setMeasurements(21.5, 80.0, 47.0);

    std::cout << "Weather station remove B1 and update: ...\n";
    weatherStation->removeObserver(&obs2);
    weatherStation->setMeasurements(22.5, 81.0, 46.5);

    ObserverPattern::CurrentCondDisplay obs4(names[3]);
    obs4.selfRegister(weatherStation);
    std::cout << "D1 just registered...\n";
    weatherStation->setMeasurements(22.5, 81.0, 46.5);

    std::cout << "A1 unregistered itself...\n";
    obs1.unRegister();
    weatherStation->setMeasurements(23.5, 82.0, 44.5);


    return 0;
}