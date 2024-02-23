#include<iostream>
using namespace std;

class Parent
{
    public :
      void Geek()
      {
        cout<<"Base Functionbbbb"<<"\n";
      }
};
class Child : public Parent
{
    public :
        void Geek()
        {
            cout<<"Derived Functionaaa\n";
        }
};

int main()
{
    Child cd;
    cd.Geek();

    return 0;

}