#pragma once

#include <iostream>
#include <memory>

namespace compoundp {

class Goose {
public:
    void honk() {
        std::cout << "Goose Honk " << std::endl;
    }
};

using goosePtr = std::shared_ptr<Goose>;

}