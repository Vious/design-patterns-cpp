#include "object_adapter.h"
#include "class_adapter.h"
using namespace objectAdapter;

void ClientCode(TargetPtr target) {
    std::cout << target->Request() << std::endl;
}

using ClassAdapterTargetPtr = std::shared_ptr<classAdapter::Target>;
void ClientCode_MultiInheritence(ClassAdapterTargetPtr ptr) {
    std::cout << ptr->Request() << std::endl; 
}

int main()
{
    // testing object adapter
    TargetPtr target = std::make_shared<Target>();
    ClientCode(target);
    
    AdapteePtr adaptee = std::make_shared<Adaptee>();
    std::cout << adaptee->specificRequest() << std::endl;

    AdapterPtr adapter = std::make_shared<Adapter>(adaptee);
    auto adapted_target = std::static_pointer_cast<Target> (adapter);
    ClientCode(adapted_target);

    // test class adapter
    auto mhTarget = std::make_shared<classAdapter::Target>();
    ClientCode_MultiInheritence(mhTarget);

    auto mhAdaptee = std::make_shared<classAdapter::Adaptee>();
    std::cout << mhAdaptee->specificRequest() << std::endl;

    auto mhAdapter = std::make_shared<classAdapter::Adapter>();
    auto mhAdapted = std::static_pointer_cast<classAdapter::Target> (mhAdapter);
    ClientCode_MultiInheritence(mhAdapted);


    return 0;
}