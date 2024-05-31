#pragma once

#include <vector>
#include <unordered_map>
#include <iostream>

#include "menu.hpp"
#include "interface.hpp"
#include "concrete_iterator.hpp"

namespace itp {

class PancakeMenu : public Menu {
public:
    PancakeMenu() {
        addItem("K&B’s Pancake Breakfast", "Pancakes with scrambled eggs, and toast", true, 2.99);

        addItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99);
        
        addItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49);
        
        addItem("Waffles", "Waffles, with your choice of blueberries or strawberries", true, 3.59);
    }

    void addItem(std::string name, std::string desc, bool veg, float price) {
        if (menuItems_.size() < maxItems_) {
            MenuItem item(name, desc, veg, price);
            menuItems_.emplace_back(item);
        } else {
            std::cout << "Pancake Menu full! Cannot add new item!" << std::endl;
        }
    }

    std::vector<MenuItem> getMenuIems() {
        return menuItems_;
    }

    virtual iterPtr createIterator() override {
        return std::make_shared<PancakeMenuIterator>(menuItems_);
    }

private: 
    size_t maxItems_ = 10;
    std::vector<MenuItem> menuItems_;
};

class DinerMenu : public Menu {
public:
    DinerMenu() {
        addItem("Vegetarian BLT", "(Fakin’) Bacon with lettuce & tomato on whole wheat", true, 2.99);

        addItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);

        addItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29);

        addItem("Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05);

    }

    void addItem(std::string name, std::string desc, bool veg, float price) {
        if (itemHashMaps_.size() < maxItems_) {
            MenuItem item(name, desc, veg, price);
            itemHashMaps_.insert({name, item});
        } else {
            std::cout << "Diner Menu full! Cannot add new item!" << std::endl;
        }
    }

    virtual iterPtr createIterator() override {
        return std::make_shared<DinerMenuIterator>(itemHashMaps_);
    }


private:
    const int maxItems_ = 6;
    std::unordered_map<std::string, MenuItem> itemHashMaps_;
};


using PancakeMenuPtr = std::shared_ptr<PancakeMenu>;
using DinerMenuPtr = std::shared_ptr<DinerMenu>;

}