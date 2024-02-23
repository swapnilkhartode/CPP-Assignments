#include<iostream>
using namespace std;
/*
If we have work with local variable we have some important points .
   1-> Local variable cannot access outside of function .
   note : we want to acess local variable in different function of class then we required to store local variable value in instance variable.
*/
class ABC
{
    public :
      void setValue(int x)       // x -> is a local variable
      {

      }
      int getSquare()
      {
         return x*x;
      }
};

int main()
{
   ABC a1;
   a1.setValue(5);
   a1.getSquare();
   return 0;
}
/*
Above code generate compile time error to us because we try to use local variable of setValue() in getSquare() 
so it is not possible to access local variable of one function in another function directly.
so in this case of class of class you need to copy the value of local variable x in instance variable.
*/