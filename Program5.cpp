// WAP to create function name as getSquare(int no) and pass single parametr in it and return square of number.

#include<iostream>
using namespace std;

int getSquare(int no)
{
    return no*no;
}
int main()
{
    int n;
    cout<<"\nEnter number\n";
    cin>>n;
    int result=getSquare(n);

    cout<<"\nSquare is "<<result;

    return 0;
}