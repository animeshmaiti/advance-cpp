#include <iostream>
using namespace std;

int main(){
    int *p{new int{1}}; //allocating p in heap memory using new
    *p=2;

    delete p;// if you don't deallocate this p it will take unnecessary space in memory   
    return 0;
}