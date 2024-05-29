#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include "beverage.hpp"

namespace tmp {

class TeaWithHook : public BeverageWithHook {
public:

    virtual void brew() override {
        std::cout << "Steaping the tea." << std::endl;
    }

    virtual void addCondiments() override {
        std::cout << "Adding Lemon." << std::endl;
    }

    virtual bool customerWantsCondiments() override {
        std::cout << "Would you like lemon with your tea (y/n)?";
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