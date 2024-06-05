#pragma once

#include <iostream>
#include <filesystem>
#include <string>

namespace prxp {

class Image {
public:
    Image(const std::string name): fileName_(name) {}

    virtual void ShowImageInfo() = 0;

    std::string getFileName() {
        return fileName_;
    }

private:
    std::string fileName_;
};

class RealImage : public Image {
public:
    RealImage(const std::string name): Image(name) {}

    void ShowImageInfo() override {
        std::cout << "Displaying image info: " << getFileName() << std::endl;

        std::filesystem::path path{getFileName()};
        std::cout << "The size of " << path.u8string() << " is " << std::filesystem::file_size(path) << " bytes.\n";

    }

};

}