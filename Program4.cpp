// WAp to strore 5 values in array and display it.
#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    cout<<"Enter  5 values in array\n";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    printf("Display the Array\n");
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}