#pragma once

#include "pizza_store.h"
#include "chistyle_cheese.h"
namespace pizzastore {


class ChicagoPizzaStore: public PizzaStore{
    
    Pizza createPizza(flavor_type type) override {
        if (type == flavor_type::cheese) {
            return ChicagoStyleCheesePizza();
        } // else if (),  for simplity, I just give one example
    }

};

}