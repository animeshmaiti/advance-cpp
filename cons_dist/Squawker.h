#include <iostream>

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
