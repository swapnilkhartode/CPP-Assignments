#include<iostream>
using namespace std;

// Class declaration
class Maths
{
    public:                  // Access Specifier
       int iNo1;             // Characteristics(Data) 
       int iNo2;             // Characteristics(Data)

    Maths()                  // Default Constructor
    {
        cout<<"Inside Default Constructor\n";
        iNo1=0;
        iNo2=0;
    }
    Maths(int A, int B)         // Parameterized constructor
    {
        cout<<"Inside Parameterised constructor\n";
        iNo1=A;
        iNo2=B;
    }
    ~Maths()                     // Destructor
    {
        cout<<"Inside Destructor\n";
    }
    // int Addition(Maths *this)
    int Addition()                     // Behaviour(Function)          
    {
        return iNo1 + iNo2;
    }
    // int Substraction(Maths *this)
    int Substraction()                // Behaviour(Function) 
    {
        return iNo1 - iNo2;
    }
};

int main()
{
    cout<<"Inside main function\n";
    Maths mobj1;                          // Default object
    Maths mobj2(11,10);                   // Parameterized Object
    int ret=0;

    ret=mobj2.Addition();
    cout<<"Addition is :"<<ret<<"\n";

     ret=mobj1.Addition();
    cout<<"Addition is :"<<ret<<"\n";


    ret=mobj1.Substraction();
    cout<<"Substraction is :"<<ret<<"\n";
}