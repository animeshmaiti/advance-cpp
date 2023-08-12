#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

template<class T>
   T Add(T t1, T t2) {return t1+t2; }

int main(){
    int i{Add(3,4)};
    double d{Add(1.1,2.2)};
    string s{Add(string{"hello "},string{"world"})};

    // int j{Add("34",2)};
    // int j{Add(d,2)};you need to give same data type

    int j{Add(i,2)}; // this is possible
    vector<int> integer{3,7,11,23};// integer vector will automatically resize your list according to elements
    vector<double> doubles{1.1,5.4,77.2,-1.2};
    int ilength=integer.size();
    int dlength=doubles.size();

    integer.push_back(-3);
    integer.push_back(22);

    ilength=integer.size();
    integer[0]++;
    auto third=integer[2];

    int total{0};
    for (int i = 0; i < integer.size(); i++)
    {
        total +=integer[i];
    }
    
    int total2{0};
    /*it will run for all integer value and update elem to according integer values.
    auto will automaticaly define the data type of elem*/
    for( const auto& elem : integer ){
        total2+=elem;
    }

    // int total3=accumulate(begin(integer),end(integer),0);


    return 0;
}