#include<iostream>
using namespace std;

class Num
{
    protected : // protected access specifier specially design for provide the parent class data access only to child class.
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