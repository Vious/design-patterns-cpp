#include <memory>

#include "subject.h"
#include "proxy.h"

using namespace prxp;

int main()
{
    std::shared_ptr<ImageProxy> imProxy = std::make_shared<ImageProxy>("/xxxxx/design-patterns-cpp/State_pattern/imgs/States.png");
    imProxy->ShowImageInfo();
    return 0;
}