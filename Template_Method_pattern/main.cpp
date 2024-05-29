#include <memory>

#include "coffee.hpp"
#include "tea.hpp"

using namespace tmp;

using bvgPtr = std::shared_ptr<BeverageWithHook>;

int main()
{
    bvgPtr makeCoffee = std::make_shared<CoffeWithHook>();
    std::cout << "Making coffee for you..." << std::endl;
    makeCoffee->prepareRecipe();

    TeaWithHook makeTea;
    std::cout << "Making tea for you..." << std::endl;
    makeTea.prepareRecipe();

    return 0;
}