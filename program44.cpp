#include<iostream>
using namespace std;
#include<string.h>

/*
1) Array of Objects :-> 

    -> Array of objects is used for store multiple objects data in single name object.
    -> Example: suppose consider we have Employee class with field id, name and sal and 
       we want to store 5 employee data or 5 employee objects data then we required to create
       5 objects of employee class so better we can create array of object of Employee class
       and store 5 employee data in single variable name.
*/

class Employee
{
    int id;
    char name[90];
    float sal;

    public :
      void setData(char[],int,float);
      void showData();
};

void Employee::setData(char name[],int id, float sal)
{
    strcpy(this->name,name);
    this->id = id;
    this->sal = sal;

}

void Employee ::showData()
{
    cout<<name<<"\t"<<id<<"\t"<<sal<<"\n";
}

int main()
{
    Employee emp[5];
    int id;
    float sal;
    char ch[90];
    for(int i=0;i<5;i++)
    {
        cout<<"Please enter id,name & sal";
        cin>>id>>ch>>sal;
        emp[i].setData(ch,id,sal);
    }
    cout<<"\nDisplay all employees\n";
    for(int i=0;i<5;i++)
    {
        emp[i].showData();
    }

    return 0;
    
}