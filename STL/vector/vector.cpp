/*
TOPIC : VECTOR (sequence container-> whatever values you gives stored sequentially it is not stored at random place so its like one after another)
Defination: Vectors in c++ are sequence containers representing arrys that can thier size during runtime.

->Vector are the same as the dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, 
with thier storage being handled automatically by the container.
-> Vector elements are placed in contiguous storage so that they can be accessed and travesed using iterators.
-> in vectors, data is inserted at the end.we use push_back function.
->Inserting at the ends takes differential time, as sometimes the array may need to extended.
-> Removing the last element takes only constant time because no resizing happens
Notes: 
1.vector is a sequence container and also known as Dynamic Array or Array List(linked list).
2.Its size can grow and shrink dynamically, and no need to provide size at compile time.
3.Vector is a dynamic array . a dynamic array is an array whose size can be changed during the execution of the program.
4.The most popular dynamic array in c++ is the vector structure. 
5.It is defined inside vector header file.
6. Vector in c++ is the class template that contains the vector container and its member functions.

Syntax: vector<object_datatype>vector_object_name;

# Initialization of Vectors :-
1. Pushing the values one-by-one in vector using push_back();
   i)  All the elements that need to be stored in the vector are pushed back one-by-one in the vector using the push_back method.
   ii) Syntax: vectorName.push_back(element_value);
2. Using the Overload constructor of the vector class :
   i) This method is used to populate a vector with multiple times the same value.
   ii) Syntax : vector<object_dataType>vectorName(numberOfRepetitions,elementValue);
3. Using Array :
   i) This method uses array as a parametr to be passed in the vector constructor.
   ii) Syntax: vector<object_dataType>vectorName {val1,val2,val3,...,valn};
4. Using alredy initialized vector:
   i) This method uses an already created vector to create a new vector with the same values.
   ii) This method passes the begin() and end() of an alredy initialized vector.
   iii) Syntax:  vector<objectDataType>vectorName1{val1,val2,val3,...,valn};
                 vector<objectDataType>vectorName2(vectorName1.begin(),vectorName1.end());
# VArious functions in vectors are :
  Iterators :
  i)  begin()-> 
  ii) end()->
  iii) rbegin()->
  iv) rend()->
  v)  cbegin()->
  vi) cend()->
  vii)crbegin()->
  Viii) crend()-> 
# VArious functions in vectors are (capacity) :
  1.size()->
  2.max_size()->
  3.capacity()->
  4.resize(n)->
  5.empty()->
  6.shrink_to_fit()->
  7.reserve()->


#ELEMENT ACESS
  at(),[],front(),back(),data()

MODIFIERS:
insert(),emplace(),push_back(),pop_back(),resize(),swap(),erase(),clear(),assign(),emplace_back();
*/
#include<iostream>
#include<vector>
using namespace std;

