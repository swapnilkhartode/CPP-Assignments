/*
1) vector::push_back() :- 1. It is used to push elements into a vector from the back.
                          2. The new value is inserted into the vector at the end, after the current last element and the container size 
                          is increased by 1.
            Syntax : vectorname.push_back(value);
                     a)Parameters : The value to be added in the back is passed as the parameter.            
                                                 
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int>v1{1,2,3,4,5};
    v1.push_back(6);

    cout<<"Printing the vector v1"<<endl;

    for(auto i=v1.begin();i!=v1.end();i++)
    {
        cout<<" "<<*i;
    }
    
    
    
}