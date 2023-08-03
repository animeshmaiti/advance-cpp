#include "NamedRectangle.h"
#include <iostream>

int main(){
    NamedRectangle fred_rectangle{"Fred",3,4};
    int fred_area{fred_rectangle.area()};
    std::cout<<fred_area<<"\n";

    Rectangle unnamed_rectangle{fred_rectangle};
    Rectangle& fred_ref{fred_rectangle};

    fred_ref.resize(6,8);
    fred_area=fred_rectangle.area();
    std::cout<<fred_area<<"\n";

    std::string fredname=fred_rectangle.get_name();
    std::cout<<fredname<<"\n";
    // std::string fredname=fred_ref.get_name();
    // fred_ref has no function get_name() because fred_ref is reference of Rectangle
    // and Rectangle has no get_name() function fred_rectangle has get_name() but when
    // we pass this to Rectangle it ignore the name "Fred" because Rectangle has no _name or get_name()
    // ex- if you store a floating point number in int it will ignore the point values and store as int

    std::cout<<fred_rectangle.get_height()<<"\n";
    std::cout<<fred_rectangle.get_width()<<"\n";

    return 0;
}