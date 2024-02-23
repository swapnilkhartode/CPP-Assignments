#include<iostream>
using namespace std;
//Base class
class Parent
{
    public :
       int idp;

};
// child class inheeting from base class
class Child : public Parent
{
    public : // if we here access specifier declared as private, then we cant acccess characteristics of the class  by object of child class. 
       int idc;
}; 

int main()
{
    Child obj1;  // object created of child class .

    obj1.idc =7 ;
    obj1.idp=91;
    cout<<"Child id is : "<<obj1.idc<<"\n";
    cout<<"Parent id is : "<<obj1.idp<<"\n";

    return 0;
}