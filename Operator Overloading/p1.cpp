// program to demonstrate the working behind operator overloading.
#include<iostream>
using namespace std;
class A
{
    //logic
};

int main()
{
    A a1,a2,a3;
    a3= a1 + a2; // "+" operator is predefined to operate on inbulit data types. but here class "A " is  a userdefined data types.compiler genrrates erro

    return 0;
}