#include <iostream>
#include <memory>

#include "duck_simulator.h"
#include "duck_factory/count_duck_fact.h"

using namespace compoundp;

int main()
{
    abstractFactPtr duckFactory = std::make_shared<CountingDuckFactory>();
    simulate(duckFactory);

    simulateWithIterator(duckFactory);

    return 0;
}