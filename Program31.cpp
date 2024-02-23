#include<iostream>
using namespace std;
/*
we cannot use non-static variables in static function but we can use static variables in non-static functions.
means static functions only work with static variables.
*/
class ABC 
{
    public :
    /*
    static function means function declare with a static keyword and call by using classname::  .
    */
      static void show()
      {
         cout<<"I Am static function\n";
      }
};

int main()
{
    ABC::show();

    return 0;
}