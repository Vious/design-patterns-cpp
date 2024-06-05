# State Pattern
A simple c++ code for state pattern. The case used here is gumball machine. 

## Notes
There are sevral points that I would like to note down.
- Avoid circular dependency. (c/c++ is different from Java)
- When using srand(time(0)) with multi threads in a class member function which would be called by each thread, there are chances that two different threads sampled the same group of random numbers (due to the time interval is too short).