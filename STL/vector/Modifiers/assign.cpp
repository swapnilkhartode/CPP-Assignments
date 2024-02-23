/*
MODIFIERS:
insert(),emplace(),push_back(),pop_back(),resize(),swap(),erase(),clear(),assign(),emplace_back();

1] vector::assign() :- 1. It assigns new value to the vector elements by replacing old ones.
                       2. It can also modify the size of the vector if necessary.
            Syntax: 
            
                    A] Syntax for assigning constant values:-
                        vectorname.assign(int size, int value);
                         a) Parameters :
                                   size :- number of values to be assigned.
                                   value:- value to be assigned to the vectorname
                    B] Syntax For assigning values from an array or list.

                         vectorname.assign(arr, arr + size);
                         a) Parameters :
                                   arr :- the array which is to be assigned to a vector.
                                   size :- no of elements from the beggining which has to be assigned.
                    C] Syntax For modifying values from a vector.

                         vectorname.assign(InputIterator first, InputIterator last);
                         a) Parameters :
                                   first :- input iterator to the initial position range.
                                   last  :- input iterator to the final position range.
                    D] Syntax For assigning values with initializer list.

                         vectorname.assign(Initializer_list);
                         a) Parameters :
                                   Initializer_list

            Time Complexity : Linear O(n)
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int>v1;
    v1.assign(7,100); // A

    cout<<"Size of vector v1 : "<<(int)(v1.size()) <<endl;
    cout<<"Elements are : "<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
//-----------------------------------------------------------------------------------------------
    vector<int>v2;
    int a[]={1,2,3};

    // Assign first 2 values
    v2.assign(a,a+2);    // B

    cout<<"Elements of vector2 are : "<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;


    vector<int>v3;
    // assign first 3 values
     v3.assign(a,a+3);            // B
     cout<<"Elements of vector3 are : "<<endl;
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;
//-----------------------------------------------------------------------------------------------
    vector<int>v4;
    v4.assign(7,100);

    // modify the elements
    v4.assign(v4.begin(),v4.begin() + 3);   // C

    cout<<"Modified vector Elements are : "<<endl;
    for(int i=0;i<v4.size();i++)
    {
        cout<<v4[i]<<endl;
    }
    cout<<endl;
//-----------------------------------------------------------------------------------------------
    vector<int>v5;
     
     // Initialize v5 with an inialization List
    v5.assign({1,2,3});    // D

    cout<<"The list is : "<<endl;
    for(auto i=v5.begin();i!=v5.end();i++)
    {
        cout<<*i<<" ";
    }
    

    return 0;
}