#include<iostream>
using namespace std;

class Base1
{
    public :
      int A;

      Base1()
      {
         cout<<"inside Base1 constructor\n";
      }
      ~Base1()
      {
         cout<<"Base1 destructor\n";
      }

      void fun()
      {
         cout<<"inside base1 fun\n";
      }


};
class Base2
{
    public :

      int i,j,k;

      Base2()
      {
        cout<<"inside Base2 constructor\n";
      }
      ~Base2()
      {
        cout<<"inside Base2 destructor\n";
      }

      void gun()
      {
          cout<<"Base2 gun\n";
      }

};

class Derived : public Base1, public Base2
{
    public :

    int x,y;
     Derived()
      {
        cout<<"inside Derived constructor\n";
      }
      ~Derived()
      {
        cout<<"inside Derived destructor\n";
      }

      void sun()
      {
        cout<<"Derived sun\n";
      }

};
int main()
{
    Derived dobj;
    dobj.fun(); // base1
    dobj.gun(); //base2
    dobj.sun();// destructor

    return 0;
}