#include<iostream>
using namespace std;
/*
If exact match is not found the compiler uses the integral promotions to the actual argument such as :
  i) char,unsigned char, and short are promoted to an int.
  ii) float is promoted to double.
*/
class Addition
{
      public :

      int sum(int a, int b)
      {
            return a+b;
      }
      int sum(int a, int b, double c)
      {
         return a+ b+ c;
      }
};
int main()
{
    Addition obj;
    cout<<obj.sum(5,5)<<"\n"; // integral promotion
    cout<<obj.sum(81,100,5.4f);  // integral promotion
    return 0;
}