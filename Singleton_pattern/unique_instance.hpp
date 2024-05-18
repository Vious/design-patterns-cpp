#pragma once

#include <mutex>
#include <atomic>
#include <iostream>

namespace UniIns {
class UniqueInstance
{
private:
    /* data */
    // int counter;
    static std::atomic<size_t> counter_;
    std::atomic<size_t> value_;
    std::mutex mtx_;
    UniqueInstance() {
        {
            std::cout << "Constructing only one singleton object." << std::endl;
            value_ = 0;
        }
    }
    ~UniqueInstance() {
        std::cout << "Destructing the created singleton object." << std::endl;
    }
public:
    // delete copy and move constructors
    UniqueInstance(const UniqueInstance &other) = delete;
    const UniqueInstance &operator=(const UniqueInstance &other) = delete;

    UniqueInstance(const UniqueInstance &&other) = delete;
    const UniqueInstance &operator=(const UniqueInstance &&other) = delete;

    static UniqueInstance &getInstance() {
        counter_++;
        static UniqueInstance instance{};
        return instance;
    }

    size_t getCounter() {
        return counter_;
    }

    size_t getValue() {
        return value_;
    }

    void increase() {
        value_++;
    }


    
};

std::atomic<size_t> UniqueInstance::counter_ = 0;

}