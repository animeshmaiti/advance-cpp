#pragma once
#include "Rectangle.h"
#include <string>

class NamedRectangle : public Rectangle
{
private:
   std::string _name;
public:
    NamedRectangle (){};
    NamedRectangle (std::string initial_name,int initial_width,int initial_height)
        :Rectangle{initial_width,initial_height},_name{initial_name}
        {
        }
        std::string get_name() const {return _name;}
};