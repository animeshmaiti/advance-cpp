#include <iostream>
using namespace std;

int main(){
    int x{1};
    int* pointer_to_x{&x};
    int y{*pointer_to_x};
    y=3;
    *pointer_to_x=4;

    int * p{&x};
    p=&y;

    int j{*p};

    p=nullptr;
    // j=*p;// you cannot dereference a nullptr

    return 0;
}