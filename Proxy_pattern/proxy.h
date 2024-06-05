#pragma once

#include <memory>

#include "subject.h"

namespace prxp {

using imgPtr = std::shared_ptr<Image>;

class ImageProxy : public Image {
public:
    ImageProxy(const std::string filename) : Image(filename), realImg_(nullptr) {}

    void ShowImageInfo() override {
        if (realImg_ == nullptr) {
            realImg_ = std::make_shared<RealImage>(getFileName());
        }
        realImg_->ShowImageInfo();
    }

private:
    imgPtr realImg_;
};

}