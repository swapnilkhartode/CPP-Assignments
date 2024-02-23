/*
1] vector::shrink_to_fit() :- 1.Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
                              2.it is built in function in c++.
                    Syntax : vectorname.shrink_to_fit();
                                 a) Parameters : Function does not accept any parametrs.
                                 b) Return value : This function does not return anything.
                    Time Complexity- Linear O(N).

*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1{0,1,2,3,4,5,6,7,8,9};
    // changes the size of the vector but does not destroy the elemets
    v1.resize(5);

    cout<<"Vector size after resize(5) : "<<v1.size()<<endl;    //5
    cout<<"Vector elemets after resize(5) : "<<endl;
    for(int i=0; i< 10; i++)
    {
        cout<<v1[i]<<" ";         //0 1 2 3 4 5 6 7 8 9
    }
    cout<<endl;
    // shrinks to the size till which elements are destroys the element after 5.
    v1.shrink_to_fit();

    cout<<"Vector size after shrink_to_fit() :  "<<v1.size()<<endl; // 5
    cout<<"Vector elements after shrink_to_fit() : ";
    for(int i=0;i<10;i++)
    {
        cout<<v1[i]<<" ";       //0 1 2 3 4 -1 -1883330801 134276066 0 2     till the size ok , 6 to 10 garbage values.
    }
    return 0;


}