#include<iostream>
using namespace std;

class Addition
{
    private:
        int a,b;

      public :

      void sum(int a, int b)
      {
            this->a=a;
            this->b=b;
            return a+b;
      }
      void sum(int a, int b, double c)
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