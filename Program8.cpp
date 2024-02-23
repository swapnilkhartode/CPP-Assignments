#include<iostream>
using namespace std;
class Add
{
    private :
     int a,b;
    public :
      void setValue(int x,int y)
      {
        a=x;
        b=y;
      }
      int getAdd()
      {
        return a+b;
      }
};
int main()
{
    Add ad;
    ad.setValue(10,20);
    int r =ad.getAdd();

    cout<<"\nAddition is : "<<r;
    return 0;
}