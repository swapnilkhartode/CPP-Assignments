#include<iostream>
using namespace std;
/*
if local variable name and instance variable name is same then instance variable never accesible in local block
*/
class ABC
{
    int no;
    public :
      void setValue(int no)
      {
        no=no;
      }
      int getSquare()
      {
        return no*no;
      }

};
/*
this is internal reference present in every class which is used for point to current running object in memory or working object in memory.
function calling object called as working object in memory.
-> this reference normally recommends.
   a) When instance variable name and local variable is same.
   b) When we want to call same class member from its own defination.
*/
int main()
{
    ABC a1;
    a1.setValue(5);
    int r=a1.getSquare();
    cout<<"\nSquare is "<<r;

    return 0;
}