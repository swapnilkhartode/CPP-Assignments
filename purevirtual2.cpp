#include<iostream>
using namespace std;

class Vehicle
{
    public :
      virtual void engine()=0;// pure virtual
    
};
class Bike : public Vehicle
{
    public :
       void engine()
       {
            cout<<"200cc\n";
       }
};
class Car : public Vehicle
{
    public :
       void engine()
       {
          cout<<"1000CC\n";
       }
};

/*
Note : if we want write logic of abstract method then we can write in child class just we have to override abstract class in child class and define 
       its method.
*/
