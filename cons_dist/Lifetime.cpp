#include <iostream>
#include "Squawker.h"

void allocate(){
    try
    {
        Squawker inner{"Inner"};
        Squawker *pS{new Squawker{"Heap"}};
        throw std::runtime_error("Error");
        delete pS;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n";
    }
}

int main(){
    Squawker noname;
    Squawker named{"Named"};
    
    allocate();
    return 0;
}
