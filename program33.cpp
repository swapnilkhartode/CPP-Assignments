#include<iostream>
using namespace std;

class ABC
{
    public :
      static int No;

      static void show()
      {
        No=100;
        cout<<"I am static function : "<<No;
      }

};
int ABC::No=0;

int main()
{
    ABC::show();

    return 0;
}