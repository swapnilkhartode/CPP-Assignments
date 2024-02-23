#include<iostream>
using namespace std;
/*
How to define function outside of class
Syntax :
          return type classname :: functionname(arguments)
          {
              Write here your logics
          }

          Example: we want to design class name as Square with two functions 
            void setValue(int x): this function is used for accept integer as parameter
            int getSquare(): this function is used for calculate square and return it.

*/
class Square
{
    int no;

    public :
         void setValue(int x);
         int getSquare();       
};

void Square :: setValue(int x)
{
    no=x;
}

int Square :: getSquare()
{
    return no*no;
}

int main()
{
    Square s;
    int n;
    cout<<"\nEnter number\n";
    cin>>n;
    s.setValue(n);
    int r=s.getSquare();

    cout<<"Square is "<<r;

    return 0;
}