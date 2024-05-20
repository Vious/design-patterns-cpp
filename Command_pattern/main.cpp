#include <iostream>
#include "remote.h"

using namespace cmdPattern;

int main() 
{
    SimpleDevice light("light");
    SimpleDevice tv("tv");
    SimpleDevice garbageDoor("garbageDoor");

    GeneralTurnOn lightOn(light);
    TurnOFF lightOFF(light);

    GeneralTurnOn tvOn(tv);
    TurnOFF tvOFF(tv);

    GeneralTurnOn garbageDoorOn(garbageDoor);
    TurnOFF garbageDoorOFF(garbageDoor);

    RemoteControl rmCtrl;
    rmCtrl.addCommand(&lightOn);
    rmCtrl.addCommand(&lightOFF);

    rmCtrl.addCommand(&tvOn);
    rmCtrl.addCommand(&tvOFF);


    rmCtrl.addCommand(&garbageDoorOn);
    rmCtrl.addCommand(&garbageDoorOFF);

    for (int i = 0 ; i < rmCtrl.getSize(); i++) {
        rmCtrl.pressButton(i);
    }

    //test out of bound value
    rmCtrl.pressButton(100);

    return 0;
}