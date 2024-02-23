#include<iostream>
using namespace std;
/*
This code generate compile time error to us because we use int "No" instance variable in 
1-> static block because static function can allocate memory before creating object of class and
2-> instance variable allocate memory after creating object of a class so when we use static function using classname, then so there is possible
 there is no object in memory so without object instance variable cannot allocate memory so the behaviour of instance variable in static function
 so you can use static varible only static function.
*/
class ABC
{
    public :
      int No;

      static void show()
      {
        No=100;
      }
};

int main()
{
    ABC::show();

    return 0;
}