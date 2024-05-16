#include "nystyle_cheese.h"
#include "chistyle_cheese.h"
#include "pizza_store.h"
#include "ny_store.h"
#include "chicago_store.h"


using namespace pizzastore;

int main() 
{
    PizzaStore *nyStore = new NYPizzaStore();
    Pizza pizza1 = nyStore->orderPizza(flavor_type::cheese);

    PizzaStore *chiStore = new ChicagoPizzaStore();
    Pizza pizza2 = chiStore->orderPizza(flavor_type::cheese);


    return 0;
}