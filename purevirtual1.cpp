#include<iostream>
using namespace std;

class Vehicle             // abstract class
{
    public :
      virtual void engine()=0; // abstract method
};

/*
if we think about above code we have a Vehicle is abstract class void engine() is abstract function.

Why use abstract class and abstract methods?
-> 1. To achieve absraction
-> 2. To perform Dynamic polymorphism

Absraction : Hide the implementation detail from end user 
*/