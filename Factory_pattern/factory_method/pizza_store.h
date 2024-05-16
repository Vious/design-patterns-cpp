#pragma once

#include <string>
#include "pizza.h"

namespace pizzastore {

enum pizza_stype{NY, CHI, CAL};
enum flavor_type{cheese, pepp, clam, veggie};

class PizzaStore{
public:
    Pizza orderPizza(flavor_type type) {
        Pizza pizza;
        
        pizza = createPizza(type);

        pizza.prepare();
        pizza.bake();
        pizza.cut();
        pizza.box();

        return pizza;
    }

protected:
    
    virtual Pizza createPizza(flavor_type type) = 0;

};

}