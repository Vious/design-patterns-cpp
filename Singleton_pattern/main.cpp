#include <thread>
#include <mutex>
#include <vector>
#include "unique_instance.hpp"


#define NUM_THREAD 10

using namespace UniIns;


void Counting(UniqueInstance &instance) {
    // instance.g
    while(instance.getValue() < 10) { 
        instance.increase();
        std::cout << "Value now is:" << instance.getValue() << std::endl;
    }
}

int main() 
{
    int num_thread = NUM_THREAD;
    std::vector<std::thread> threads;
    for (int i = 0; i < num_thread; i++) {
        threads.push_back(std::thread{Counting, std::ref(UniqueInstance::getInstance())});
    }

    for (auto &th : threads) {
        th.join();
    }
    UniqueInstance &ins1 = UniqueInstance::getInstance();
    UniqueInstance &ins2 = UniqueInstance::getInstance();
    int increase_more = 100;
    while (increase_more > 0) {
        increase_more--;
        ins1.increase();
        ins2.increase();
        std::cout << "Value now is:" << "In Instance1:" << ins1.getValue() << " In Instance2: " << ins2.getValue() << std::endl;
    }

    UniqueInstance &ins3 = UniqueInstance::getInstance();

    std::cout << "Num of object referenced: " << ins3.getCounter() << std::endl;
    ins3.increase();
    std::cout << "Value now is:" << ins3.getValue() << std::endl;

    return 0;
}