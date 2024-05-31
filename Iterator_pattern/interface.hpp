#pragma once

#include "menu.hpp"

namespace itp {

class MyIterator {
public:
    virtual bool hasNext() = 0;

    virtual MenuItem& next() = 0;

    virtual void remove(size_t idx) = 0;
};

using iterPtr = std::shared_ptr<MyIterator>;

class Menu {
public:
    virtual iterPtr createIterator() = 0;
};


}