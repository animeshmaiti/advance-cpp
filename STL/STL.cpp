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

    // int j{Add(s,2)};
    vector<int> integer{3,7,11,23};
    vector<double> doubles{1.1,5.4,77.2,-1.2};
    int ilength=integer.size();
    int dlength=doubles.size();

    integer.push_back(-3);
    integer.push_back(22);

    ilength=integer.size();
    integer[0]++;
    auto third=integer[2];

    return 0;
}