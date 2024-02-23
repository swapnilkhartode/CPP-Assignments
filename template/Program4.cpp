#include<iostream>
using namespace std;
// declaring the template function 
template <class T>
//overloading the template function
void display(T t1)
{
     cout<<"inside the display template function : "<<t1<<endl;
}
//overloading the template function with an integer parameter
void display(int t1)
{
    cout<<"Inside the overloaded template function : "<<t1<<endl;
}
int main()
{
    // calling the different overloaded functions with different parameters
    display(20);
    display(20.55);
    display('G');

    return 0;
}