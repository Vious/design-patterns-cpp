#include "nystyle_cheese.h"
#include "chistyle_cheese.h"
#include "pizza_store.h"
#include "ny_store.h"
#include "chicago_store.h"
#include <memory>

using namespace pizzastore;


int main() 
{
    // PizzaStore *nyStore = new NYPizzaStore();
    std::shared_ptr<PizzaStore> nyStore = std::make_shared<NYPizzaStore>();
    std::shared_ptr<Pizza> pizza1 = nyStore->orderPizza(flavor_type::cheese);

    std::shared_ptr<PizzaStore> chiStore = std::make_shared<ChicagoPizzaStore>();
    std::shared_ptr<Pizza> pizza2 = chiStore->orderPizza(flavor_type::cheese);


    return 0;
}