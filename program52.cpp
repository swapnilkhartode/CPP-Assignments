#include<iostream>
using namespace std;
//. Write program to create class name as Factorial with two functions 
class Factorial
{
    private :
     int no,f;

    public :
      void setValue(int x)
      {
        no=x;
        f=1;
      }
      int getFactorial()
      {
        for(int i=1; i<=no; i++)
        {
            f=f*i;
        }
        return f;
      }
};

int main()
{
    Factorial fr;
    int no;
    cout<<"Enter the number\n";
    cin>>no;
    fr.setValue(no);
    int result = fr.getFactorial();

    cout<<"Factorial is : "<<result;

    return 0;

}