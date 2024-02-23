#include<iostream>
using namespace std;

//template class
// here E is class or data type it has ability to store any type of data in it. but user can restrict to store or work with data.
template<class E> class A
{
    public :
       void show(E e)
       {
          cout<<"\nData is "<<e<<"\n";
          cout<<"Size of "<<sizeof(e);
       }
};

int main()
{
    A<int>a1;
    a1.show(100);
    A<char*>a2;
    a2.show("Good morning india");
    A<float>a3;
    a3.show(5.4f);
    return 0;
}