#include<iostream>
using namespace std;
class Demo
{
    public :             // Acess Specifier
      int i;             // instance variable(Non-static variable)
      int j;             // instance variable
      static int k;      // class variable(static variable)
      static int l;      // class variable(static variable)

      Demo()            // Default Constructor
      {
        i=0;
        j=0;
      }

      Demo(int a, int b)  // Parameterised Constructor
      {
        i=a;
        j=b;
      }
      //void fun(const Demo *this)
      void fun()                      // instance method(function)
      {

        // static + non static
        cout<<"Inside Non static method fun\n";
        cout<<"Value of i : "<<this->i<<"\n";
        cout<<"Value of j : "<<this->j<<"\n";
        cout<<"Value of k : "<<k<<"\n";               //non static method can access static as well as non static data.
        cout<<"Value of l : "<<l<<"\n";
      }

      static void gun()            // static method(class method(function))
      {
        // static
        cout<<"Inside static method gun\n";
        /*
        cout<<"Value of i : "<<i<<"\n";
        cout<<"Value of j : "<<this->j<<"\n";    // there is a error because static method can acess only static data of class where non static method can access 
                                                    static as well as non static data.
        */ 
        
        cout<<"value of k : "<<k<<"\n";
        cout<<"value of l : "<<l<<"\n";  
      }
      // error: invalid use of member 'Demo::i' in static member function
    //38 |         cout<<"Value of i : "<<i<<"\n";
     
};

// Load time variables
int Demo ::k=0;
int Demo ::l=0;

int main()
{
    cout<<"Inside Main\n";
    cout<<"Value of k : "<<Demo::k<<"\n";   //0
    cout<<"Value of l : "<<Demo::l<<"\n";   //0

    Demo::gun();
    Demo obj1(10,11);
    Demo obj2(20,21);
    Demo obj3;

    cout<<"Value of i in obj1 : "<<obj1.i<<"\n";  // 10
    cout<<"Value of i in obj2 : "<<obj2.i<<"\n";  // 20

    cout<<"Value of j in obj1 : "<<obj1.j<<"\n";  // 11
    cout<<"Value of j in obj2 : "<<obj2.j<<"\n";  // 21

    obj1.fun();    // fun(&obj1);
    obj2.fun();

    return 0;
}
// Size of object is summation of sizes of its non static characteristics.
// sizeof(obj) = sizeof(i) + sizeof(j);
// sizeof(obj) = 4 + 4;
// sizeof(obj) = 8
