#include<iostream>
using namespace std;

class ABC
{
    public :
      int x;
      static int y;

};

int ABC::y=0; // if we not write this its gives error as undefined reference to ABC::y
              // must be initialized
int main()
{
    ABC a1;
    a1.x=200;
    ABC::y=100;  // NOTE : we can use static variable by using classname ::  as well as by using objectname.

    cout<<"X="<<a1.x<<"\tY= "<<a1.y<<"\n";
}