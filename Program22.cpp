#include<iostream>
using namespace std;

class Add        // class declaration 
{
    private :
      int a,b;
    public :
        void setValue(int x,int y)   // function defination
        {
            a=x;
            b=y;
        }
        int getAdd()
        {
            //return x+y; // scope of local variable inside the function where they declared.
            return a+b;
        }
};

int main()
{
    Add ad;              // object creation 
// object created in memory
    ad.setValue(10,20);  // function calling
    int r =ad.getAdd();
    cout<<"\nAddition is : "<<r;

    return 0;
}