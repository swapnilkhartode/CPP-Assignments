/*
1) vector::push_back() :- 1. It is used to remove elements  from a vector from the back.
                          2. The value is removed from the vector from the end, and the container size is decreased by 1.
            Syntax : vectorname.pop_back(value);
                     a)Parameters : TNo parameters are passed.            
                                                 
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1{1,2,3,4,5};
    v1.pop_back();

    cout<<"Printing the vector v1"<<endl;

    for(auto i=v1.begin();i!=v1.end();i++)
    {
        cout<<" "<<*i;
    }
}