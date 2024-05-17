#pragma once

#include "pizza.h"

namespace pizzastore {
class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza() {
        name = "Chicago Style Deep Dish Cheese Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";

        toppings.emplace_back("Shredded Mozzarella Cheese");
    }

    virtual void cut() override {
        std::cout << "Cutting the pizza into square slices.\n"; 
    }

};

}