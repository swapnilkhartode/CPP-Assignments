/*
Inheritance means transfer properties of one class to another class called as inheritance 
in the case of inheritance we have two types of classes one is parent class and one is 
child class property sender class known as parent and property receive class called as child class.

If we want to achieve inheritance using C++ we have following syntax
Syntax
class childclassname: access specifier parent classname{


Note: above code generate compile time error to us because we have no variable declared within
Num class in private section and we try to access it or use it in Square class which is our child class 
and we cannot access private member of any parent class in child class directly if we want to access
 it we can use protected access specifier.
protected access specifier specially design for provide the parent class data access only to child class

}
*/
#include<iostream>
using namespace std;

class Num
{
    private :
    int no;
    void setNum(int x)
    {
        cout<<"in parent class\n";
        no=x;
    }
};

class Square : public Num
{
     public :
        void setNum(int x)
       {
           no=x;
           cout<<"in child class\n";
        }
        int getSquare()
        {
            return no*no;
        }
};

int main()
{
    Square s; // child class ne parent chya method and characteristics copy karu shakto pn parent child chya karu shakat nahi,
    s.setNum(10);
    int result = s.getSquare();
    cout<<"\nSquare is "<<result<<"\n";

    return 0;

}