#pragma once

#include "pizza_store.h"
#include "nystyle_cheese.h"
namespace pizzastore {


class NYPizzaStore: public PizzaStore{
    
    virtual std::shared_ptr<Pizza> createPizza(flavor_type type) override {
        if (type == flavor_type::cheese) {
            return std::make_shared<NYStyleCheesePizza>();
        } // else if , for other type
    }

};

}