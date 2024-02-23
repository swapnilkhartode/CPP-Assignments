// Instance variable allocate memory after creating object of class and static variable allocate memory before creating object of class.
// so the static variables access using (classname :: static variable=0(or here initialize))

#include<iostream>
using namespace std;

class ABC
{
    public :
     int x;
     static int y;
};

int ABC ::y=0;// initialization

int main()
{
    ABC a1;
    a1.x=200;
    ABC :: y=100;
    cout<<"X= "<<a1.x<<"\tY = "<<a1.y<<"\n";

    return 0;

    
}