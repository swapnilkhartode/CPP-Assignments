/*
Example: WAP to create class name as Player with field id,name and run and arrange all
 player in descending order by their runs use array of object .
*/
#include<iostream>
#include<string.h>
using namespace std;

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
      cout<<id<<"\t"<<ch<<"\t"<<sal<<"\n";
}
int Employee::getId()
{
    return id;
}

int main()
{
    Employee emp[3];

    int id;
    char name[90];
    float sal;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the id , name and salary\n";
        cin>>id>>name>>sal;
        emp[i].setData(id,name,sal);
    }
    cout<<"Display the all Employee data\n";
    for(int i=0;i<3;i++)
    {
         emp[i].showData();
    }

    for(int i=0;i<3;i++)
    {
        for(int j=(i+1);j<3;j++)
        {
            int id2=emp[j].getId();
            int id1=emp[i].getId();
            if(id1 <id2 )
            {
                Employee temp=emp[i];
                emp[i]=emp[j];
                emp[j]=temp;
                
            }
        }
    }
    cout<<"Display after the sort by Employee Id\n";
    for(int i=0;i<3;i++)
    {
        emp[i].showData();
    }

}

