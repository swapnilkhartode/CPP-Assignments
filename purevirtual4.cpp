#include<iostream>
using namespace std;

class Employee
{
    public :
      virtual void skillSet()=0;
};

class SoftwareEngineer:public Employee
{
    public :
      void skillSet()
      {
         cout<<"Good comm, coding and analytical skill";
      }
};

class Cook: public Employee
{
    public :
       void skillSet()
       {
           cout<<"Knowledge about cooking\n";
       }
};

int main()
{
    SoftwareEngineer s;
    s.skillSet();
    Cook c;
    c.skillSet();

    return 0;
}
 