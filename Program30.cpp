#include<iostream>
using namespace std;

class ABC
{
    public :
      int x;
      static int y;

};

int ABC::y=0;
// NOTE : we can use static variable by using classname ::  as well as by using objectname.

int main()
{
    ABC a1,a2;
    a1.x=100;
    a1.y=200;
    cout<<"With First Object\n";
    cout<<"X= "<<a1.x<<"\tY= "<<a1.y<<"\n";
    cout<<"With second object\n";
    cout<<"X= "<<a2.x<<"\t Y = "<<a2.y<<"\n";

    // we not initialised a2.x = garbage value;

    return 0;
}
