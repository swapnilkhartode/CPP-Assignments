#include<iostream>
using namespace std;

class ABC
{
    public :
      int x;
      static int y;

};

int ABC :: y=0;
int main()
{
    ABC a1,a2;

    a1.x=100;
    a1.y=200;

    cout<<"With First Object\n";
    cout<<"X= "<<a1.x<<"\t Y = "<<a1.y<<"\n";
    cout<<"With the second object\n";
    cout<<"X= "<<a2.x<<"\t Y = "<<a2.y<<"\n";  // a2.x takes garbage value

    return 0;
    
}

/*
   -> Static variables shares it common copy between more than one object of same class and 
   -> instance variable share its separate copy for every object of class .
   -> we can use static variable by using classname as well as by using objectname.
   -> static function means function declare with a static keyword and can call using (classname ::)
   -> We cannot use non static variable  in static function but static variable can use 
*/