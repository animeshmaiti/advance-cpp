#pragma once
#include "Shape.h"
class Triangle : public Shape
{
private:
    float _base;
    float _height;
public:
    Triangle():_base{0},_height{0}{ }
    Triangle(float initial_base,float initial_height)
        :_base{initial_base},_height{initial_height}{}

    float get_width(){return _base;}
    float get_height(){return _height;}

    void resize(float new_base,float new_height)
    {
        _base=new_base;
        _height=new_height;
    }
    float area() const
    {
        return 0.5 * _base * _height;
    }
};