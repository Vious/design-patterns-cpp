#include <memory>
#include <iostream>
#include "menu.hpp"
#include "concrete_menu.hpp"
#include "concrete_iterator.hpp"

using namespace itp;


class Service {
public:

    Service(PancakeMenuPtr pancakeMenu, DinerMenuPtr dinerMenu) {
        pancakeMenu_ = pancakeMenu;
        dinerMenu_ = dinerMenu;
    }

    void printMenu() {
        iterPtr pancakeItr = pancakeMenu_->createIterator();
        iterPtr dinerIter = dinerMenu_->createIterator();
        std::cout << "Menu----------Breakfast\n";
        printMenu(pancakeItr);
        std::cout << "Menu----------Lunch\n";
        printMenu(dinerIter);

    }

private:
    PancakeMenuPtr pancakeMenu_;
    DinerMenuPtr dinerMenu_;

    void printMenu(iterPtr iter) {
        while(iter->hasNext()) {
            MenuItem mIterm = iter->next();
            std::cout << mIterm.getName() + ", " << mIterm.getPrice() << "--" + mIterm.getDescription() << std::endl;        
        }
    }

};


int main()
{  
    PancakeMenuPtr pMenu = std::make_shared<PancakeMenu>();
    DinerMenuPtr dMenu = std::make_shared<DinerMenu>();
    Service serv(pMenu, dMenu);

    serv.printMenu();

    return 0;
}