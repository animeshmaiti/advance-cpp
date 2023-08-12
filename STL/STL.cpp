#include <iostream>
#include <vector>//erase,insert
#include <algorithm>//sort
#include <numeric>//accumulate,iota

using namespace std;

/*In C++, a template is a feature that allows you to create a
single blueprint for a function or a class that can work with
different data types. Templates provide a way to write more generic
and reusable code by parameterizing the type of data the function or
class operates on. This is particularly useful when you want to perform
the same logic on different types without writing separate functions or classes for each type.*/
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
    /*The accumulate function calculates the sum of the elements in the range
    defined by begin(integer) and end(integer) and initializes the sum with a
    starting value of 0. The result is stored in the variable total3.*/
    int total3=accumulate(begin(integer),end(integer),0);
    /*this way we can initialize a vector 0-9. but if we need to store 0-100 or more
    so we will not write every single number we can store using loop but we can do more 
    easy way using iota*/ 
    vector<int>consecutive{0,1,2,3,4,5,6,7,8,9};
    vector<int>consecutive2(10);
    iota(begin(consecutive2),end(consecutive2),0);

    consecutive.erase(begin(consecutive));//erasing first element and update the first element to next element
    consecutive.erase(begin(consecutive)+2);// remove the third element (begin always start with 0)
    consecutive.erase(begin(consecutive)+4,end(consecutive));// erase with range erase 5th element to end
    consecutive.erase(begin(consecutive)+2,end(consecutive)-2);//erase 3rd element to last 3rd element
    consecutive.insert(begin(consecutive)+3,45);// insert 45 in 4th position
    consecutive.insert(end(consecutive)-3,36);// insert 36 in last 4th position
    //remember those positions are need to avl in you vector<int> variable
    sort(begin(doubles),end(doubles));//it will sort element with in this range you can change the range

    //seventiseven is iterator if you want to access then you need to dereference it
    auto seventyseven=find(begin(doubles),end(doubles),77.2);  
    *seventyseven=7.2;

    return 0;
}