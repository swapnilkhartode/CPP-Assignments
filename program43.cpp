/*
Write program to create class name as Power with two functions.
void setValue(int base,int index): this function can accept two parameters 
int getPower():this function calculate power of number and return it

*/
#include<iostream>
using namespace std;

class Power
{
    public :
         int base,index,p;

    public :
        void setValue(int,int);//declaration
        int getPower();//declaration
};
void Power::setValue(int base, int index)
{
    this->base=base;
    this->index=index;
}

int Power::getPower()
{
    int p=1;
    for(int i=1;i<=index;i++)
    {
        p=p*base;
    }
    return p;
}

int main()
{
    Power p;
    p.setValue(5,4);
    int result = p.getPower();
    cout<<"\nPower is "<<result;

    return 0;
}