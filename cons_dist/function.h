#include<iostream>
#include "Squawker.h"

void allocate(){
    try
    {
        Squawker inner{"Inner"};
        Squawker *pS{new Squawker{"Heap"}};
        /*As a result, the dynamically allocated object is not explicitly deleted,
        and the destructor for the Squawker class is not called. */
        /*To ensure that the destructor is called and memory is properly managed,
        you should use the Resource Acquisition Is Initialization (RAII) principle*/
        throw std::runtime_error("Error");
        delete pS;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n";
    }
}