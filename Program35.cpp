#include<iostream>
using namespace std;

class A
{
    int no;  // instance variable
    public :
        void setValue(int x)
        {
            no=x;  // copy local variable into instance variable
        }
        int getSquare()
        {
            return no*no;
        }
        // instance variable is accesible in all functions of class A
};

int main()
{
    A a1;
    a1.setValue(5);
    int r=a1.getSquare();
    cout<<"\nSquare is "<<r;
    return 0;
}