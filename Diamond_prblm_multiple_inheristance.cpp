/*
if we think about above diagram we have diamond problem because we have two parent classes name as A and B and 
we have one child class name as C and in parent A contain void show() and parent  B contain void show() and void display() method and 
class C contain 2 version of show() one is from A and one is from B and 1 version of display which is inherited by B and 1 version of 
test() method which is own method of class C and in main function we created object of class C and try to call c1.show() then compiler
get confused about show() method calling because it C class contain two version of show() so compiler  cannot predicate show() should 
call from class A or from class B so this is called as diamond problem and if we want to solve this problem we have to use scope resolution operator in C++.
so we can define one addition method in class C and call particular parent method using 
classname::methodname()



*********in main function we created object of class C and try to call c1.show() then compiler get confused about show() method calling 
because it C class contain two version of show() so compiler  cannot predicate show() should call from class A or from class B so this
 is called as diamond problem **********

*/

#include<iostream>
using namespace std;

class A
{
    public :
      void show()
      {
        cout<<"I am A show method\n";
      }
};
class B
{
    public :
      void display()
      {
        cout<<"I am B display method\n";
      }
      void show()
      {
        cout<<"I am show method of B\n";
      }
};
class C:public A,public B
{
    public :
       void test()
       {
          cout<<"I am c test mathod\n";
       }

};

int main()
{
    C c1;
    c1.show(); //request for member 'show' is ambiguous.
    c1.display();
    c1.test();

    return 0;
}