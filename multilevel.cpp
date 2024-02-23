#include<iostream>
using namespace std;

class Base
{
    public :
       int A,B;

       Base()
       {
          cout<<"Inside Base constructor\n";
       }
       ~Base()
       {
          cout<<"inside base destructor\n";
       }

       void fun()
       {
          cout<<"Inside Fun\n";
       }

};

class Derived : public Base
{
     public :
       int X,Y;

       Derived()
       {
          cout<<"inside Derived constructor\n";
       }
       ~Derived()
       {
          cout<<"Inside Derived Destructor\n";
       }

       void gun()
       {
          cout<<"inside gun of derived\n";
       }
};

class Derivedx :public Derived
{
    public :
     int i,j;

     Derivedx()
     {
        cout<<"Inside derivedx constructor\n";
     }
     ~Derivedx()
     {
        cout<<"Inside derivedx destructor\n";
     }

     void sun()
     {
        cout<<"Inside derivedx sun\n";
     }

};

int main()
{
    cout<<"Size of Base :"<<sizeof(Base)<<"\n";
    cout<<"size of derived :"<<sizeof(Derived)<<"\n";
    cout<<"size of derivedx :"<<sizeof(Derivedx)<<"\n";

    Derivedx dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}