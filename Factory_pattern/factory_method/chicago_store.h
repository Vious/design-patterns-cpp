#pragma once

#include "pizza_store.h"
#include "chistyle_cheese.h"
namespace pizzastore {


class ChicagoPizzaStore: public PizzaStore{
    
    std::shared_ptr<Pizza> createPizza(flavor_type type) override {
        if (type == flavor_type::cheese) {
            return std::make_shared<ChicagoStyleCheesePizza>();
        } // else if (),  for simplity, I just give one example
    }

};

}