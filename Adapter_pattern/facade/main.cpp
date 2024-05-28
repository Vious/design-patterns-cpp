#include "subsystem.h"

using namespace facadePattern;

int main()
{
    auto tv = std::make_shared<TV>();
    auto airCondPtr = std::make_shared<AirCond>();

    std::shared_ptr<FacadeHome> home = std::make_shared<FacadeHome>(tv, airCondPtr);
    // std::shared_ptr<FacadeHome> home = std::make_shared<FacadeHome>(); // also ok.
    home->TurnOnOperation();
    home->TurnOffOperation();

    return 0;
}