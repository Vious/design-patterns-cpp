#pragma once

#include <memory>
#include "../ducks/duck-inl.h"

namespace compoundp {

class AbstractDuckFactory {
public:
    virtual quackPtr createMallardDuck() = 0;
    virtual quackPtr createRedheadDuck() = 0;
    virtual quackPtr createDuckCall() = 0;
    virtual quackPtr createRubberDuck() = 0;

};

using abstractFactPtr = std::shared_ptr<AbstractDuckFactory>;

}