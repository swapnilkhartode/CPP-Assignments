// create class person -> variables name , age and country and display by using array of object and array size is 3.

#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    private :
      char name[90],country[90];
      int age;

    public :
     
     void setValue(char name[],int age,char country[])
     {
        strcpy(this->name,name);
        this->age=age;
        strcpy(this->country,country);

     }
     void Display()
     {
        cout<<"name : "<<name<<"\t"<<"Age : "<<age<<"\t"<<"country : "<<country<<"\n";
     }

};

int main()
{
    Person p[3];
    char name[90],country[90];
    int age;


    for(int i=0;i<3;i++)
    {
        cout<<"enter name , age and country\n";
        cin>>name>>age>>country;
        p[i].setValue(name,age,country);
    }

    cout<<"Print the all information of persons :\n";
    for(int i=0;i<3;i++)
    {
        p[i].Display();
    }
}