#pragma once

#include <string>

namespace classAdapter {

class Target {
public:
    virtual std::string Request() const {
        return "ClassAdapter Target (Multi Inheritance): The default target's behavior.";
    }
};

class Adaptee {
public:
    std::string specificRequest() const {
        return "In ClassAdapter adaptee: a specific behavior.";
    }
};

class Adapter : public Target, public Adaptee {
public:
    Adapter() {}
    std::string Request() const override {
        std::string ret = specificRequest();
        return "ClassAdapter: (Multi Inheritance, transferred) " + ret; 
    }

};

}