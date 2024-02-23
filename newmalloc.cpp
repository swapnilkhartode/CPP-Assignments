#include<iostream>
using namespace std;

class A
{
    int a;

    public :
     int *ptr;

     A()
     {
        cout<<"Constructor was called!"<<"\n";
     }
};

int main()
{
    A* a= new A;  // Create object using new operator
    cout<<"Object of class was created using new operator\n";

    A* b= (A*)malloc(sizeof(A));  // Create object using malloc function.

    cout<<"Object of class cerated using malloc() !\n";

    return 0;


}