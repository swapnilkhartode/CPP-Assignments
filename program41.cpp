#include<iostream>
using namespace std;

int no=100;
int main()
{
    int no=200;
    cout<<"\nLocal variable is "<<no<<"\n";
    cout<<"\nGlobal variable is "<<::no<<"\n";
}