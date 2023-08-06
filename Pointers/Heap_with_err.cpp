#include <iostream>
#include <stdexcept>

int main(){
    try
    {
        int *p{new int{1}};
        *p=3;
        throw std::runtime_error("Error");
        /* you will see when you debug this program that the delete p; line is not executed
        and there are no way to access this p it would result memory leak. we can handle this like 
        in catch block if(p!=nullptr){delete p;} but it not a good way to do that*/
        delete p;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}