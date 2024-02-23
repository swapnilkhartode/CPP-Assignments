#include<iostream>
using namespace std;
template<class T> class Number
{
     // Function Prototype
     T getnum();
};

//Function Defination
template<class T> 
T Number<T>::getnum()
{
    return num;
}
