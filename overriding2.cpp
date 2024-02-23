#include<iostream>
using namespace std;

class Parent
{
    public :
      void Geek()
      {
        cout<<"Base Function"<<"\n";
      }
};
class Child : public Parent
{
    public :
        void Geek()
        {
            cout<<"Derived Function\n";

            Parent::Geek();  // call of Overrodden function
        }
};

int main()
{
    Child cd;
    cd.Geek();

    return 0;

}