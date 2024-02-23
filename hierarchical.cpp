#include<iostream>
using namespace std;

class Value
{
    protected :
      int a,b;
    public :
        
        void setValue(int x, int y)
        {
            a=x;
            b=y;
        }
};
class Add:public Value
{
    public :
      int getAdd()
      {
         return a+b;
      }
};
class Mul:public Value
{
    public :
       int getMul()
       {
          return a*b;
       }
};

class Sub:public Value
{
    public :
      int getSub()
      {
         return a-b;
      }
};

int main()
{
    int choice,x,y;

    cout<<"1 : Addition\n";
    cout<<"2:Multiplication\n";
    cout<<"3:Substraction\n";

    cout<<"Enter your choice";
    cin>>choice;
    cout<<"\nEnter two Values\n";
    cin>>x>>y;
    switch(choice)
    {
        case 1 :
        {
            Add ad;
            ad.setValue(x,y);
            cout<<"Addition is"<<ad.getAdd();
            break;
        }
        case 2 :
        {
            Mul m;
            m.setValue(x,y);
            cout<<"MultiplicTion is "<<m.getMul();
            break;
        }
        case 3 :
        {
            Sub s;
            s.setValue(x,y);
            cout<<"Substraction is "<<s.getSub();
            break;
        }
        default :
        {
            cout<<"Wrong choice";
        }

        return 0;
    }
}