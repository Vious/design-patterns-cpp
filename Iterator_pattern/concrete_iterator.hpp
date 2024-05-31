#pragma once

#include <vector>
#include <unordered_map>
#include <iostream>

#include "menu.hpp"
#include "interface.hpp"

namespace itp {

class PancakeMenuIterator : public MyIterator {
public:
    PancakeMenuIterator(const std::vector<MenuItem> items) : items_(items) {}

    virtual bool hasNext() override {
        if (pos_ >= items_.size()) {
            return false;
        } 
        return true;
    }

    virtual MenuItem& next() override {
        MenuItem &menuItem = items_[pos_];
        pos_++;
        return menuItem;
    }

    virtual void remove(size_t idx) override {
        if (idx >= items_.size()) {
            std::cout << "Index out of range" << std::endl;
        } else {
            items_.erase(items_.begin() + idx);
        }
    }

private:
    std::vector<MenuItem> items_;
    size_t pos_ = 0;
};

class DinerMenuIterator : public MyIterator {
public:
    DinerMenuIterator(const std::unordered_map<std::string, MenuItem> items) : itemHashMaps_(items) {    }

    virtual bool hasNext() override {
        if (pos_ >= itemHashMaps_.size()) {
            return false;
        } 
        return true;
    }

    virtual MenuItem& next() override {
        auto iter = itemHashMaps_.begin();
        std::advance(iter, pos_);
        pos_++;
        return iter->second;
    }

    virtual void remove(size_t idx) override {
        if (idx >= itemHashMaps_.size()) {
            std::cout << "Index out of range" << std::endl;
        } else {
            auto iter = itemHashMaps_.begin();
            std::advance(iter, idx);
            itemHashMaps_.erase(iter);
        }
    }

private:
    std::unordered_map<std::string, MenuItem> itemHashMaps_;
    size_t pos_ = 0;
};



}