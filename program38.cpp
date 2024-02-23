#include<iostream>
using namespace std;

class ABC
{
    int no;
    public :
    void setValue(int no)
    {
        this->no = no;
        cout<<"\nAdress of this now "<<this;
    }
    int getSquare()
    {
        return no*no;
    }

};

int main()
{
    ABC a1;
    cout<<"\nAdress of a1 "<<&a1<<"\n";
    a1.setValue(5);
    int r=a1.getSquare();
    cout<<"\nSquare is "<<r;

    ABC a2;
    cout<<"\nAdress of a2 "<<&a2<<"\n";
    a2.setValue(10);
    r=a2.getSquare();
    cout<<"\nSqaure is "<<r;


    return 0;
}