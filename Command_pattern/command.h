#pragma once

#include <iostream>
#include <string>
#include <memory>
#include "device.h"

namespace cmdPattern {


class Command {
public:
    virtual void execute() = 0;
};

class GeneralTurnOn : public Command {
public:
    GeneralTurnOn(SimpleDevice &dev): device(dev) {}

    void execute() override { device.turnOn(); }

private:
    SimpleDevice &device;

};

class TurnOFF : public Command {
public:
    TurnOFF(SimpleDevice &dev): device(dev) {}

    void execute() override { device.trunOff(); }

private:
    SimpleDevice &device;

};

using cmdPtr = std::shared_ptr<Command>;


}