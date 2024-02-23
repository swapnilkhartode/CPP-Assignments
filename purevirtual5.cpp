// if abstract class contains more than one abstract method then all method must override where abstract class gets inherit.

#include<iostream>
using namespace std;

class Vehicle
{
    public :
       virtual void engine()=0;
       virtual void defaultColor()=0;

};

class Bike:public Vehicle
{
    public :
       void engine()
       {
          cout<<"100CC\n";
       }
       void defaultColor()
       {

       }
};
class Car : public Vehicle
{
    public :
      void engine()
      {
        cout<<"1000cc\n";
      }
      void defaultColor()
      {

      }
};

int main()
{
    Bike b;
    b.engine();
    Car c;
    c.engine();
    

    return 0;
    
}

/*
Above approach is not good suppose we consider abstract class with 50 methods and we have 5 child classes and every child required only one method
  abtsract class which is abstract but proframmer need to define 49 blank methods in every class means we required to define 250 methods and actually 
  we have required only 5 methods so 245 blank defination is tedious task and time consuming.
  So if we want solvethis prblem we have adapyter class concept .

  what is adapter class ?
  -> Adapter is intermediate class which contains all blank methods of abstract class and it is able to provide specified method to its child class.
*/