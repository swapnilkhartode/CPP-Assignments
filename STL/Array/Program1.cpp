/*
TOPIC : std:array

Syntax: array<T,N>array;
 
Notice :
1. Array is the container that encapsulates fixed size arrays.
2. Arraysize is needed at compile time.
3.Assign by value is actually by value.
4.Access Elements :
   a. at(g)- it check boundary of array if parameter outof the array size it throw exception, returnsa reference to the element at position 'g' in the vector.
   b. [g]    - no bound checking, returns a reference to the element at position 'g' in the vextor.
   c. front()-returns a reference  to the  first element in the vector.
   d. back() - returns a reference  to the  last element in the vector.
   e. data()  - gives  acess to the underlying array.(adress of that array),
                returns a direct pointer to the memory array used internally by the vector to store its owned elements.

*/
#include<iostream>
#include<array>
using namespace std;

int main()
{

    // Declaration                array<type,size>arrayname;
    array<int,5> myarray;

    //Initialization
    array<int,5> myarray= {1,2,3,4,5};   // initializer list
    array<int,5> myarray2 {1,2,3,4,5};   // uniform initialization.[initialization at the time of declaration]

    array<int,5> myarray;
    myarray= {1,2,3,4,5};


}