#pragma once

#include <memory>
#include <iostream>
#include "duck_factory/count_duck_fact.h"
#include "duck_factory/abstract_fact.hpp"
#include "flock/flock.h"

namespace compoundp {

void realSimulate(quackPtr duck) {
    duck->quack();
}

void realSimulateByFlocks(Flock *flock) {
    flock->quack();
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

void simulateWithIterator(abstractFactPtr duckFactory) {
    quackPtr redheadDuck = duckFactory->createRedheadDuck();
    quackPtr duckCall = duckFactory->createDuckCall();
    quackPtr rubberDuck = duckFactory->createRubberDuck();
    quackPtr gooseDuck = std::make_shared<GooseAdapter>(std::make_shared<Goose>());

    std::cout << "Duck Simulator: With Composite - Flocks" << std::endl;

    Flock flockOfDucks;
    flockOfDucks.add(redheadDuck);
    flockOfDucks.add(duckCall);
    flockOfDucks.add(rubberDuck);
    flockOfDucks.add(gooseDuck);

    quackPtr mallardDuck1 = duckFactory->createMallardDuck();
    quackPtr mallardDuck2 = duckFactory->createMallardDuck();
    quackPtr mallardDuck3 = duckFactory->createMallardDuck();
    quackPtr mallardDuck4 = duckFactory->createMallardDuck();

    Flock flockOfMallards;
    flockOfMallards.add(mallardDuck1);
    flockOfMallards.add(mallardDuck2);
    flockOfMallards.add(mallardDuck3);
    flockOfMallards.add(mallardDuck4);


    std::cout << "Duck Simulator: Whole Flock Simulation" << std::endl;

    realSimulateByFlocks(&flockOfDucks);

    std::cout << "Duck Simulator: Mallard Flock Simulation" << std::endl;

    realSimulateByFlocks(&flockOfMallards);

    std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times." << std::endl;

}


}