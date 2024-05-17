# Observer Pattern

A simple c++ code for observer pattern. The sample come from a classical book about design patterns, which is [Head First Design Patterns](https://www.oreilly.com/library/view/head-first-design/9781492077992/). If you are interested, you may refer to the original book for more information. 

For the observer pattern, it is mostly adopted when you meet following conditions
- If you have a information publisher, which keeps sending updated information to its subscribers. 
- You have a series of different subscribers, these subcribers get the new information when new data is updated.
- These subscribers can choose whether to continue subscirbe the information or not, while the publisher keeps in business with other subscribers. (The publisher and subscribers may not know each other well, they are loosely correlated.)

An example: the Comprehensive Transaction Platform (CTP).

## The Weather Station

We still use the weather station example (which was introduced in book [Head First Design Patterns](https://www.oreilly.com/library/view/head-first-design/9781492077992/)) for implementing our own c++ observer pattern. For simplicity, I just implement the current condition display class, for other classes like statistical display, forecast display, it depends on your need. 

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

You may find polymorphism there.