#include<iostream>
using namespace std;

class A
{
    public :
      void show()
      {
        cout<<"I am show method of class A\n";
      }
};

class B
{
    public :
      void display()
      {
        cout<<"I am B method\n";
      }
      void show()
      {
        cout<<"I am show method of B\n";
      }
};

class C :public A, public B
{
    public :
      void test()
      {
        A::show();// call parent A class method
        B::show();// call parent B class method
      }
};

int main()
{
    C c1;
    c1.display();
    c1.test();

    return 0;

}