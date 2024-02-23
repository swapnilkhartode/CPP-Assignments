#include<iostream>
using namespace std;

float add(float x,float y)
{
    return x+y;
}

void add(int x,int y)
{
    cout<<"\nAddition is "<<x+y<<"\n";
}

int main()
{
    add(10,20);
    float r=add(5.4f,2.5f);
    cout<<"\nAddition of float is "<<r<<"\n";

    return 0;

}