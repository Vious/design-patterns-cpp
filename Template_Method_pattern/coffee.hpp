#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include "beverage.hpp"

namespace tmp {

class CoffeWithHook : public BeverageWithHook {
public:

    virtual void brew() override {
        std::cout << "Dripping coffee through filter." << std::endl;
    }

    virtual void addCondiments() override {
        std::cout << "Adding sugar and milk." << std::endl;
    }

    virtual bool customerWantsCondiments() override {
        std::cout << "Would you like milk and sugar with your coffee (y/n)?";
        std::string answer = getUserInput();
        std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

        if (answer.find('y') != std::string::npos) {
            return true;
        } else {
            return false;
        }
        return false;
    }

private:
    std::string getUserInput() {
        std::string str;
        std::cin >> str;
        return str;
    }


};

}