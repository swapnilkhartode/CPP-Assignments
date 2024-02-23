/*
1) vector::at()-> at() function is used reference the element present at the position given as the parameter to the function
          
          Syntax : vectorname.at(position);
                       a) Parameters : Position of the element to be feched.
                       b) Returns : Direct reference to the element at the given position.
            Examples :
                
                A)   Input :  vectorname=1,2,3
                              vectorname.at(2);   // it works on index starts from zero.
                     Output : 3

            Errors and exceptions : 
                1) If the position is not present in the vector, it throws outof range.

            Time Complexity : Constant O(1);
                
2) vector::swap()-> swap() function is used to swap the contents of one vector with another vector of same type and sizes of vectors may differ.
          
          Syntax : vectorname1.swap(vectorname2);
                       a) Parameters : The name of the vector with which the contents have to be swapped.
                       b) Returns : All the elements of second vector are swapped.
            Examples :
                
                A)   Input :  vectorname1={1,2,3,4};
                              vectorname2={3,5,7,9};

                              vectorname1.swap(vectorname2);   // it works on index starts from zero.
                     Output : vectorname1={3,5,7,9};
                              vectorname2={1,2,3,4};

            Errors and exceptions : 
                1) It throws an error if the vector is not of the same data type.

            Time Complexity : Constant O(1);
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1{1,2,3,4};
    vector<int>v2{5,6,7,8};

    v1.swap(v2);

    cout<<"Printing the first vector"<<endl;
    for(auto i=v1.begin();i!=v1.end();i++)
    {
          cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Printing the second vector"<<endl;
    for(auto i1=v2.begin();i1!=v2.end();i1++)
    {
          cout<<*i1<<" ";
    }
    cout<<endl;

//------------------------------------------------------------------------------
//   If the size of vector differ :  

       vector<int>v3{1,2,3,4};
    vector<int>v4{5,6,7,8,9,11,45,75};

    v3.swap(v4);

    cout<<"Printing the first vector"<<endl;
    for(auto i=v3.begin();i!=v3.end();i++)
    {
          cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Printing the second vector"<<endl;
    for(auto i1=v4.begin();i1!=v4.end();i1++)
    {
          cout<<*i1<<" ";
    }

}