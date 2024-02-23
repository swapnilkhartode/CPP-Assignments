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

     ~A()
     {
        cout<<"Destructor was called!"<<"\n";
     }
};

int main()
{
    A* a= new A;  // Create object using new operator
    cout<<"Object of class was created using new operator\n";
    delete(a);
    cout<<"Object of a class deleted using delete keyword\n";

    A* b= (A*)malloc(sizeof(A));  // Create object using malloc function.
    cout<<"Object of class cerated using malloc() !\n";
    free(b);
    cout<<"Object of class A was Delete using free()\n";

    return 0;


}