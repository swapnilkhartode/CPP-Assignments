#include<iostream>
using namespace std;

class Vehicle
{
    public :
       virtual void engine()=0;
       virtual void defaultColor()=0;

};

class ADP : public Vehicle  // it provide methods parent class to its child class but as per requirement of child.
{
   public :
     void engine()
     {

     }
     void defaultColor()
     {

     }
};
class Bike:public ADP
{
    public :
       void engine()
       {
          cout<<"100CC\n";
       }
       
};
class Car : public ADP
{
    public :
      void engine()
      {
        cout<<"1000cc\n";
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
