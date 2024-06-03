#include <iostream>
#include "states/state-inl.h"


class A {

public:
    explicit A(int x) : x_(x) {}
    int x_ = 0;

};


class B : public A {
public:
    B(int x): A(x) {}
};


int main() 
{
    B b(10);
    std::cout << b.x_ << std::endl;
    return 0;
}