#include<iostream>
using namespace std;

template<class T>
class Calculator
{
    private :
       T num1,num2;
    public :
       Calculator(T n1, T n2)
       {
         num1=n1;
         num2=n2;
       }

       void displayResult()
       {
         cout<<"Numbers "<<num1<<" and "<<num2<<endl;
         cout<<num1<<" + "<<num2<<" = "<<add()<<endl;
         cout<<num1<<" - "<<num2<<" = "<<sub()<<endl;
         cout<<num1<<" * "<<num2<<" = "<<mul()<<endl;
         cout<<num1<<" / "<<num2<<" = "<<div()<<endl;
       }

       T add()
       {
         return (num1+num2);
       }
       T sub()
       {
         if(num1 > num2)
         {
            return num1-num2;
         }
         else{
            return num2-num1;
         }
       }
       T mul()
       {
          return num1*num2;
       }
       T div()
       {
           return num1/num2;
       }
      
};

int main()
{
    Calculator<int>a(10,11);
    Calculator<float>a1(12.5f,10.2f);

    cout<<"Integer Calculations"<<endl;
    a.displayResult();

     cout<<"Float Calculations"<<endl;
    a1.displayResult();
    
    return 0;
}