#pragma once

#include <string>
#include <memory>
#include "pizza.h"

namespace pizzastore {

enum pizza_stype{NY, CHI, CAL};
enum flavor_type{cheese, pepp, clam, veggie};

class PizzaStore{
public:
    std::shared_ptr<Pizza> orderPizza(flavor_type type) {
        
        std::shared_ptr<Pizza> pizza = createPizza(type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }

protected:
    
    virtual std::shared_ptr<Pizza> createPizza(flavor_type type) = 0;

};

}