/*
C++ implementation to show that a derived class does not inherit access to private data members.
Howeever itr does inherit a full parent object.
*/

#include<iostream>
using namespace std;

class A
{
    public :
      int x;
    protected :
       int y;
    private :
       int z;
};

class B : public A
{
    // x is public
    // y is protected
    // z is not accesible from B
};

class C : protected A
{
    // x is protected 
    // y is protected 
    // z is not accesible from C
};

class D : private A // private is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};