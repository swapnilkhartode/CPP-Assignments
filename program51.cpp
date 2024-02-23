//Write a program to create class name as Cube with two methods .
#include<iostream>
using namespace std;

class Cube
{
    private :
      int no;

    public :
      
      void setValue(int x)
      {
        no=x;
      }
      int getCube()
      {
        return no*no*no;
      }
};

int main()
{
    Cube c;
    int no;
    cout<<"Enter the number\n";
    cin>>no;
    c.setValue(no);
    int result=c.getCube();

    cout<<"Cube is "<<result;
}
