#pragma once

#include <memory>

#include "quackable.h"

namespace compoundp {



class Observer {
public:
    virtual void update(quackObPtr duck) = 0;
};


}