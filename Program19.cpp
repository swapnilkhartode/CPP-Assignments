// WAP to create function name as getSquare(int no) and pass single parameter in it and return square of number.

#include<iostream>
using namespace std;
int getSquare(int no)
{
    return no*no;
}
int main()
{
    int n;
    cout<<"Enter Number\n";
    cin>>n;
    int result = getSquare(n);
    cout<<"Square is "<<result<<"\n";

    return 0;
}