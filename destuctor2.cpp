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
    A *a=new A;   // new classname ; 

    /*
    there is no destructor called even after using the statement "return 0". 
    The reason lies in the difference of allocating an object of a class. when we create an object with classname objectname within block is created,
    the object has an automatic storage duration, i.e., it will automatically be destroyed on going out of scope. but when we use
    new classname the object has a dynamic storage duration , which means one has to delet it explicitely using delete keyword.
    */
    
    return 0;


}