#include<iostream>
using namespace std;
class Employee   //declare class     // here class is a keyword & Employee is a classname
{
    private :
       int id;
       char name[90];
       int sal;
    public:
       void setData()    // define function within classs
       {
        cout<<"Enter name id and salary\n";
        cin>>name>>id>>sal;
       }

       void showdata()
       {
         cout<<name<<"\t"<<id<<"\t"<<sal<<"\n";
       }
};

int main()
{

    Employee emp;   // object created
    emp.setData();// call member using object.membername
    emp.showdata();
    return 0;
}