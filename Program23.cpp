#include<iostream>
using namespace std;

class  Square
{
    private:
      int no;

    public :
      void setValue(int x)
      {
        no=x;
      }

      int getSquare()
      {
        return no*no;
      }

};

int main()
{
    Square sq;

    sq.setValue(6);
    int result=sq.getSquare();
    cout<<"Square is "<<result<<"\n";

    return 0;
}