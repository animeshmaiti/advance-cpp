#include <iostream>
// squawker is just a random class, you can replace it with any class name 
class Squawker
{
private:
    std::string name;
public:
    Squawker()
    {
        std::cout<<"Default constructor"<<std::endl;
    };
    Squawker(std::string n):name(n)
    {
        std::cout<<"Default constructor"<<std::endl;
    };
    ~Squawker()
    {
        std::cout<<"Default destructor"<<name<<std::endl;
    };
};
