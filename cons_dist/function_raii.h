#include <memory>
#include <iostream>
#include "Squawker.h"

void allocate(){
    try
    {
        /*you should manage the memory and other resources using automatic
        storage (stack-based) objects whenever possible*/
        Squawker inner{"Inner"};
        std::unique_ptr<Squawker> pS{new Squawker{"Heap"}};
        /*If you do need to use dynamic memory allocation, consider using smart
        pointers like std::unique_ptr or std::shared_ptr to ensure proper memory management
        in the presence of exceptions*/
        /*destruction order will be last constructor to first constructor*/
        throw std::runtime_error("Error");
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n";
    }
}