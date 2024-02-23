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
    A a;
    /*
    in above program , the destructor is called even though the delete operator is not used the reason for the destructor call is the statement 
    "return 0". This statement executed within main function calls the desturctor of each class for which object is created.
     to avoid destuctor calling we can replace the statement return 0 with exit(0); 
    */
    exit(0);

}