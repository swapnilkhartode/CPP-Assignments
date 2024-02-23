// WAP to create class name as Power with two functions .


#include<iostream>
using namespace std;

class Power
{
    private :
      int base,index,p;

    public :
       void setValue(int b,int i)
       {
         base=b;
         index=i;
       }
       int getPower()
       {
          p=1;
          for(int i=1;i<=index;i++)
          {
            p=p*base;
          }
          return p;
       }

};
int main()
{
    Power p;
    p.setValue(4,3);          //Function Calling
    int result = p.getPower();
    cout<<"The Power is "<<result;

    return 0;
}
