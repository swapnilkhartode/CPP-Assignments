/*
1)vector::insert() :- 1. It inserts new element before the element at the specified position, effectively increasing the container size by the
                         number of elements inserted.
                      2. Time Complexity :- Linear, O(N)
                      3. The insert function is overloaded to work on multiple cases :
                            A)Insert an element at the given index.
                                  Syntax: vectorname.insert(position,value);
                                  Parameters :
                                         a) position :It specifies the iterator which points to the position where the insertion is to be done.
                                         b) value : It specifies the value to be inserted.
                            B)Insert an element multiple times.
                                  Syntax: vectorname.insert(position,size,value);
                                  Parameters : 3 
                                         a) position :It specifies the iterator which points to the position where the insertion is to be done.
                                         b) size : It specifies the number of times a val is to be inserted at the specified position.
                                         c) value : It specifies the value to be inserted.
                            C)Insert a range of elements at the given index.
                                  Syntax: vectorname.insert(position,iterator1,iterator2);
                                  Parameters : 3 
                                         a) position :It specifies the iterator which points to the position where the insertion is to be done.
                                         b) iterator1 : It specifies starting position from which the elements are to be inserted.
                                         c) iterator2: It specifies the ending position till which element are to be inserted.
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1{1,2,3,4,5};

    cout<<"Printing the original vector"<<endl;
    for(auto x: v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    // Inserting the value 100 at position 3(index starts from 0) in the vector.
    v1.insert(v1.begin() + 3, 100);                                                     //A
    cout<<"Printing the modified vector "<<endl;
    for(auto x: v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
//-----------------------------------------------------------------------------------------------------
   vector<int>v2{1,2,3,4,5};

    cout<<"Printing the original vector"<<endl;
    for(auto x: v2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    // Inserting the value 100 , 4 times starting at position 3(index starts from 0) in the vector.
    v2.insert(v2.begin() + 3,4, 100);                                                     //B
    cout<<"Printing the modified vector "<<endl;
    for(auto x: v2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
//-----------------------------------------------------------------------------------------------------
   vector<int>Original{1,2,3,4,5};
   vector<int>Temp{2,5,9,0,3,10};

    cout<<"Printing the original vector"<<endl;
    for(auto x: Original)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    /* Inserting the Portion of Temp vector in Original Vector.Temp.begin()+2 starting iterator of the vector to be copied Temp.begin()+5 is ending 
        iterator of vector to be copied.
        */
    Original.insert(Original.begin()+ 3,Temp.begin()+2, Temp.begin()+5);                         //C
    cout<<"Printing the modified vector "<<endl;
    for(auto x: Original)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}