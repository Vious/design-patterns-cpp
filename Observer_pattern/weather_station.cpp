#include <iostream>
#include <vector>
#include <string>
#include "weather_data.h"
#include "cur_cond_display.h"

int main() 
{
    ObserverPattern::WeatherData weatherStation;
    std::vector<std::string> names{"A1", "B1", "C1"};

    ObserverPattern::CurrentCondDisplay obs1(names[0]);
    ObserverPattern::CurrentCondDisplay obs2(names[1]);
    ObserverPattern::CurrentCondDisplay obs3(names[2]);

    weatherStation.registerObserver(&obs1);
    weatherStation.registerObserver(&obs2);
    weatherStation.registerObserver(&obs3);
    
    std::cout << "Changing for the first time: ...\n";
    weatherStation.setMeasurements(20.5, 79.0, 50.0);
    std::cout << "Changing for the second time: ...\n";
    weatherStation.setMeasurements(21.5, 80.0, 47.0);

    

    return 0;
}