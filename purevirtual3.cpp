#include<iostream>
using namespace std;

class Vehicle
{
    public :
      virtual void engine()=0;

};

void main()
{
    Vehicle v;// it is not possible
    return 0;
}
/*
If we think about above code we get compile time error because we can`t creaye object of abstract class Vehicle v.

-> if you want write logics of abstract mwthod we must be inherit abstract class in child class and override its method and write logics
*/