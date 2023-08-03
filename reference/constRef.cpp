#include <iostream>
using namespace std;

void multiply_by_two(int& param){// with out & it send just a copy it will not change the original value
    param=param*2;
}
int main(){
    int x{1};
    multiply_by_two(x);
    const int y{x};
    // int& yref{y};// not allowed. a non-const reference can not bind with const object
    int const& yref{y};
    cout<<x<<"\n";

    // int& uninit;//must initialize the reference if you don't the it whom to refer then it will throw error

    int& xref{x};
    int const& xconstref{x};
    xref=2;// this is allowed
    // xconstref=4; this is not allowed
    x=45;
    cout<<xconstref;


    return 0;
}