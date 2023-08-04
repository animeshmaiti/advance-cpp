#include "NamedRectangle.h"
#include "Triangle.h"
#include <iostream>
using namespace std;

void double_dimensions(Rectangle& rectangle)
{
    rectangle.resize(rectangle.get_width()*2,rectangle.get_height()*2);
}
float compute_area(const Shape& a_shape)
{
    return a_shape.area();
}

int main(){
    NamedRectangle fred_rectangle{"Fred",3,4};
    float fred_area{fred_rectangle.area()};

    Rectangle unnamed_rectangle{fred_rectangle};
    double_dimensions(fred_rectangle);
    double_dimensions(unnamed_rectangle);

    Rectangle& fred_ref{fred_rectangle};
    fred_ref.resize(6,8);
    fred_area=fred_rectangle.area();
    
    string fredname=fred_rectangle.get_name();

    // Shape a_shape{};
   /*object of abstract class type "Shape" is not allowed:C/C++(322)
    function "Shape::area" is a pure virtual function*/
    Rectangle a_rectangle{};// you can create this because Rectangle is not a pure virtual function
    // Shape a_shape{a_rectangle};// this is also not allowed
    Triangle triangle{5,3};
    // float triangle_area{triangle.area()};
    fred_area=compute_area(fred_rectangle);
    cout<<fred_area;
    float triangle_area=compute_area(triangle);
    cout<<triangle_area;
    return 0;
}