// WAP to input the two values and consider first value as base and second as index and calculate its power.
#include<iostream>
using namespace std;
int main()
{
    int base,index,p=1;
    cout<<"Enter Base and index\n";
    cin>>base>>index;
    for(int i=1;i<=index;i++)
    {
        p=p*base;
    }
    cout<<"\nPower is : "<<p;
    return 0;
}