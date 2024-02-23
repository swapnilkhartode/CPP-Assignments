#include<iostream>
using namespace std;
#include<string.h>

/*
The major goal of pointer of object we can allocate dynamic memory of object
 at run time whe we use pointer with object then we can use ->(arrow operator for access member).
*/
class Employee
{
    private :
      int id;
      char ch[90];
      float sal;
    
    public :
      void setData(int,char[],float);
      void showData();
      int getId();
};

void Employee::setData(int id,char name[],float sal)
{
    this->id=id;
    strcpy(ch,name);
    this->sal=sal;
}

void Employee::showData()
{
    cout<<id<<"\t"<<ch<<"\t"<<sal;
}

int Employee::getId()
{
    return id;
}
int main()
{
    Employee *emp;
    char name[90];
    int id;
    float sal;
    emp=(Employee *)malloc(sizeof(Employee));
    cout<<"\nEnter name id and salary\n";
    cin>>name>>id>>sal;
    emp->setData(id,name,sal);
    emp->showData();

    return 0;

}