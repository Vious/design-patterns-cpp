#pragma once

#include <string>
#include <memory>
#include <iostream>

namespace objectAdapter {


class Target {
public:
    virtual std::string Request() const {
        return "Target: The default target's behavior.";
    }
};

using TargetPtr = std::shared_ptr<Target>;

class Adaptee {
public:
    std::string specificRequest() const {
        return "In adaptee: a specific behavior.";
    }
};

using AdapteePtr = std::shared_ptr<Adaptee>;

class Adapter : public Target {
public:
    Adapter(AdapteePtr adaptr) : adaptee_(adaptr) {}
    
    std::string Request() const override {
        std::string ret = adaptee_->specificRequest();
        return "Adapater: (transferred) " + ret; 
    }

private:
    AdapteePtr adaptee_;
};

using AdapterPtr = std::shared_ptr<Adapter>;


}