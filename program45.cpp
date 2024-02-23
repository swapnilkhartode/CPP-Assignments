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

void Employee::setData(int id,char name[90],float sal)
{
        this->id=id;
        strcpy(ch,name);
        this->sal=sal;
}
void Employee::showData()
{
    cout<<ch<<"\t"<<id<<"\t"<<sal<<"\n";
}

int Employee::getId()
{
    return id;
}

int main()
{
    Employee emp[5]; // Array of objects.
    int id;
    char name[90];
    float sal;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the id , name & salary\n";
        cin>>id>>name>>sal;
        emp[i].setData(id,name,sal);
    }
    cout<<"Display all Employee\n";
    for(int i=0;i<5;i++)
    {
        emp[i].showData();
    }
    int key,result;
    cout<<"Enter the id";
    cin>>key;
    int flag=0;
    for(int i=0;i<5;i++)
    {
        int skey=emp[i].getId();
        if(skey==key)
        {
            flag=1;
            result=i;
            break;
        }
    }
    if(flag)
    {
        cout<<"Player Found at index \n"<<result;
    }
    else
    {
        cout<<"Player Not Found";
    }
    return 0;
}