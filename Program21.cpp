#include<iostream>
using namespace std;
class Employee      // Declare Class
{
    private :
       int id;
       char name[90];
       float sal;
    public :
       void setData()         // Define Function within class
       {
           cout<<"\nEnter name id and salary\n";
           cin>>name>>id>>sal;
       }
       void showData()
       {
          cout<<name<<" \t"<<id<<"\t"<<sal<<"\n";
       }
};
int main()
{
    Employee emp;       // object created.
    emp.setData();      // calling member using object.membername
    emp.showData();

    return 0;

}