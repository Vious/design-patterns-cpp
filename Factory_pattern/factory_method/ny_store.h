#pragma once

#include "pizza_store.h"
#include "nystyle_cheese.h"
namespace pizzastore {


class NYPizzaStore: public PizzaStore{
    
    Pizza createPizza(flavor_type type) {
        if (type == flavor_type::cheese) {
            return NYStyleCheesePizza();
        } // else if , for other type
    }

};

}