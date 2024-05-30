#pragma once

#include <iterator>
#include <vector>
#include <memory>

namespace itp {

template<typename T, typename U>
class MyIterator {
public:
    using iterType = std::vector<T>::iterator;
    using dataPtr = std::shared_ptr<U>;
    MyIterator() {

    }

    iterType currentIter() {
        return miter_;
    }

    void Next() {
        miter_++;
    }

    void First() {
        miter_ = data_.begin();
    }

private:
    dataPtr data_;
    iterType miter_;

};

}