/*
if we think about above diagram we have ambiguity problem because we have class A which is main parent
 and it is inherited in class B and class C means show() method of class A is present in class B and
  present in class C and we inherit the class B and class C in class D so the show() is duplicated 
  in class D because it is inherited from class B and class C so when we create object of class D and
   try to call the show() method then compiler cannot predicate which version of should() execute means 
   class B or class C so if we want to solve this problem then we can use virtual class concept in hybrid inheritance.
Means you can use virtual keyword where your main parent class get inherit shown in following code.

*/

#include<iostream>
using namespace std;
class A
{
    public :
      void show()
      {
        cout<<"I am A method\n";
      }
};

class B:public A
{
    public :
        void display()
        {
            cout<<"I am B method\n";
        }
};
class C: public A
{
    public :
      void disp()
      {
         cout<<"I am C method\n";
      }
};

class D:public B, public C
{
    public :
       void test()
       {
           cout<<"\nI am D method\n";
       }
};

int main()
{
    D d1;
    d1.show();//compiler cannot predicate which version of should() execute means class B or class C
    d1.display();
    d1.disp();
    d1.test();

    return 0;
}