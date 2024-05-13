# Observer Pattern

A simple c++ code for observer pattern. The sample come from a classical book about design patterns, which is [Head First Design Patterns](https://www.oreilly.com/library/view/head-first-design/9781492077992/). If you are interested, you may refer to the original book for more information. 

## The Weather Station

We still use the weather station example (which was introduced in book [Head First Design Patterns](https://www.oreilly.com/library/view/head-first-design/9781492077992/)) for implementing our own c++ observer pattern. 

## How to use
```
git clone https://github.com/Vious/design-patterns-cpp.git
cd Observer_pattern/
mkdir build
cd build
cmake ..
make
./ObeserverPattern
```

Output might look like
```
Changing for the first time: ...
Observer A1 current condition: 20.5 F degress and 79 % humidity, 50 pressure
Observer B1 current condition: 20.5 F degress and 79 % humidity, 50 pressure
Observer C1 current condition: 20.5 F degress and 79 % humidity, 50 pressure
Changing for the second time: ...
Observer A1 current condition: 21.5 F degress and 80 % humidity, 47 pressure
Observer B1 current condition: 21.5 F degress and 80 % humidity, 47 pressure
Observer C1 current condition: 21.5 F degress and 80 % humidity, 47 pressure
```

