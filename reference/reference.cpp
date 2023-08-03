#include <iostream>
using namespace std;

int main(){
    int x{1};// we can initialize value like this this type of syntax will work only on initialization 
    int y{x};// x and y the are not connected both are taking difference memory location  
    // y{5} invalid
    // cout<<y;
    y=2;
    int& xref{x};// xref is also acquiring different mem loc but it storing x's address to refer x
    x=2;// update the value x 1 to 2
    xref=3;// here xref will update the value of x. How? xref is reference of x mean here we are storing 3 in the x's address
    cout<<x<<"\n";
    cout<<xref<<"\n";
    int copy{xref};
    cout<<copy<<"\n";

    return 0;
}