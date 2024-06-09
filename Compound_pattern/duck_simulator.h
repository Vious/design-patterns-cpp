#pragma once

#include <memory>
#include <iostream>
#include "duck_factory/count_duck_fact.h"
#include "duck_factory/abstract_fact.hpp"

namespace compoundp {

void realSimulate(quackPtr duck) {
    duck->quack();
}

void simulate(abstractFactPtr duckFactory) {
    quackPtr mallardDuck = duckFactory->createMallardDuck();
    quackPtr redheadDuck = duckFactory->createRedheadDuck();
    quackPtr duckCall = duckFactory->createDuckCall();
    quackPtr rubberDuck = duckFactory->createRubberDuck();
    quackPtr gooseDuck = std::make_shared<GooseAdapter>(std::make_shared<Goose>());

    std::cout << "Duck Simulator: With Abstract Factory" << std::endl;

    realSimulate(mallardDuck);
    realSimulate(redheadDuck);
    realSimulate(duckCall);
    realSimulate(rubberDuck);
    realSimulate(gooseDuck);
    
    std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times." << std::endl;

}


}