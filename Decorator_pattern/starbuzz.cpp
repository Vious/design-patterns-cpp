#include <iostream>
#include "beverage.hpp"
#include "condiment_decorator.hpp"
#include "condiments/condiments-inl.h"
#include "componets/components-inl.h"

using namespace Starbuzz;

int main() 
{
    Beverage *ori_beverage = new CondimentDecorator;
    std::cout << ori_beverage->getDescription() + " cost :" << ori_beverage->cost() << " $\n";

    ori_beverage = new Mocha(ori_beverage);
    ori_beverage = new Mocha(ori_beverage);
    ori_beverage = new Whip(ori_beverage);
    std::cout << ori_beverage->getDescription() + " cost :" << ori_beverage->cost() << " $\n";

    Beverage *bvg2 = new DarkRoast();
    std::cout << bvg2->getDescription() + " cost :" << bvg2->cost() << " $\n";
    bvg2 = new SteamedMilk(bvg2);
    std::cout << bvg2->getDescription() + " cost :" << bvg2->cost() << " $\n";

    Beverage *bvg3 = new HouseBlend();
    bvg3 = new Soy(bvg3);
    bvg3 = new Mocha(bvg3);
    bvg3 = new Whip(bvg3);
    std::cout << bvg3->getDescription() + " cost :" << bvg3->cost() << " $\n";


    return 0;
}
