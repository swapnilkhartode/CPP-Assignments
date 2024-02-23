#include<iostream>
using namespace std;

class A
{
    protected :
      int a;
    
    public :
      void seta()
      {
        cout<<"Enter the value of A=";
        cin>>a;
      }

      void dispa()
      {
        cout<<"\n"<<"Value of A ="<<a;
      }  
};

class B : public A
{
    private :
      int b,p;

    public :
       void setb()
       {
           seta();
           cout<<"Enter the Value of B= ";
           cin>>b;
       }
       void dispb()
       {
         dispa();
         cout<<"\n"<<"Value of B= "<<b;
       }

       void calProduct()
       {
           p=a*b;
           cout<<"\n"<<"Product of "<<a<<"*"<<b<<"="<<p;
       }
};

int main()
{
    B b;
    b.setb();
    b.dispb();
    b.calProduct();

    return 0;
}