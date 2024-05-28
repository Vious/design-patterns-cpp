#pragma once

#include <iostream>
#include <string>
#include <memory>

namespace facadePattern {

class TV {
public:
    void TurnOn() {
        std::cout << "Turn ON the tv...\n";
    }

    void TurnOff() {
        std::cout << "Turn OFF the tv...\n";
    }

};

class AirCond {
public:
    void TurnOn() {
        std::cout << "Turn ON the air-conditioning...\n";
    }
    void TurnOff() {
        std::cout << "Turn OFF the air-conditioning...\n";
    }

    void makeCooler() {
        std::cout << "Lower down the temperature...\n";
    }

};

using tvPtr = std::shared_ptr<TV>;
using airCondPtr = std::shared_ptr<AirCond>;

class FacadeHome {
public:
    FacadeHome(tvPtr tv = nullptr, airCondPtr airCond = nullptr) {
        tv_ = tv ? : std::make_shared<TV>();
        airCond_ = airCond ? : std::make_shared<AirCond>();
    }

    void TurnOnOperation() {
        tv_->TurnOn();
        airCond_->TurnOn();
        airCond_->makeCooler();
    }

    void TurnOffOperation() {
        tv_->TurnOff();
        airCond_->TurnOff();
    }

protected:
    tvPtr tv_;
    airCondPtr airCond_;
};

}