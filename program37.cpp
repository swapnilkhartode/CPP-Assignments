#include<iostream>
using namespace std;

class ABC
{
    int no;
    public :
      void setValue(int no)
      {
        this->no=no;
      }
      int getSquare()
      {
        return no*no;
      }

};
/*
if we think above code we have output is square is 0 because we use instance variable and local variable name same in setValue() function not allow 
instance varible in his block and we call one a1.getSquare() and this function return square of number but instance variable "no" has not any value
it contain default value as a garbage so get sesult 0 asgarbage value.
$$ to solve this problem we have to use this reference.
*/
int main()
{
    ABC a1;
    a1.setValue(5);
    int r=a1.getSquare();
    cout<<"\nSquare is "<<r;

    return 0;
}