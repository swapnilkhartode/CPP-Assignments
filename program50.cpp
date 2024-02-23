/*
new Keyword in c++
__________________________________________________________________________________________________________________________________

new keyword is used for allocate memory at run time like as malloc using pointer using new keyword we can allocate array at run time as well as create object at run time etc;
How to create dynamic array using new keyword :
Syntax:
datatype *variablename = new datatype[size];
*/

#include<iostream>
using namespace std ;

int main()
{
    int *ptr,size;
    cout<<"\nEnter size of array\n";
    cin>>size;
    ptr=new int[size];
    cout<<"\nEnter Values in Array\n";

    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];

    }

    cout<<"\nDisplay array Values\n";
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<"\t";
    }

    return 0;
}