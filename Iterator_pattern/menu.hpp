#pragma once

#include <string>
#include <memory>

namespace itp
{

class MenuItem {
public:
    MenuItem(std::string name, std::string desc, bool veg, float price): name_(name), description_(desc),
        vegetarian_(veg), price_(price) {}

    std::string getName() {return name_;}

    std::string getDescription() {return description_;}

    bool isVegetarian() {
        return vegetarian_;
    }

    float getPrice() {
        return price_;
    }

private:
    std::string name_;
    std::string description_;
    bool vegetarian_;
    float price_;

};

using MenuItemPtr = std::shared_ptr<MenuItem>;

} // namespace itp
