#pragma once

#include <string>
#include <iostream>
#include <vector>

namespace pizzastore {
class Pizza {
public:
    std::string name;
    std::string dough;
    std::string sauce;
    
    void prepare() {
        std::cout << "Preparing " << name << std::endl;
        std::cout << "Tossing dough...\n";
        std::cout << "Adding sauce...\n";
        std::cout << "Adding toppings...\n";
        for (auto &top : toppings) {
            std::cout << " " << top << std::endl;
        }

    }

    void bake() {
        std::cout << "Bake for 25 mins at 350.\n";
    }

    virtual void cut() {
        std::cout << "Cutting the pizza into diagonal slices.\n";
    }

    void box() {
        std::cout << "Place pizza in official PizzaStore box.\n";
    }

    std::string getName() {return name;}

protected:
    std::vector<std::string> toppings;

};

}