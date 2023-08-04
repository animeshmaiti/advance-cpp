#pragma once
class Shape
{
public:
    virtual float area() const = 0;
    /*
    'virtual': This keyword indicates that the function is intended to be overridden (redefined) in derived classes.
    When a base class declares a function as virtual, it allows derived classes to provide their own implementation
    of that function.
    */
    /*
   '= 0': This part indicates that the function is a pure virtual function. A pure virtual function
   is a function that is declared in a base class but does not have a definition there. The = 0 syntax
   at the end means that no implementation is provided in the base class. This makes the base class an abstract class.
    */
};
