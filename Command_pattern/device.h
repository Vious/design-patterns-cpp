#pragma once

#include <iostream>
#include <string>

namespace cmdPattern{
class SimpleDevice {
public:
    SimpleDevice(const std::string &name): deviceName_(name) {}

    void turnOn() {std::cout << "Device " << deviceName_ << " has been turned ON." << std::endl;}

    void trunOff() {std::cout << "Device " << deviceName_ << " is OFF." << std::endl;}

private:
    std::string deviceName_;

};

}