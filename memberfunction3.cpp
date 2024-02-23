// Example : Define member function with argument outside the class 

#include<iostream>
using namespace std;

class Person
{
    private :
      int id;
      char name[100];
    public :
      void setp(int,char[]);
      void displayp();
};  // semicolon is only for class
// return type classname :: member function

void Person::setp(int id,char n[])
{
       cout<<"Enter the Id:";
        cin>>id;
        cout<<"Enter the name:";
        cin>>name;
}
void Person::displayp()
{
    cout<<endl<<"Id :"<<id <<"\nName : "<<name<<"\n";
}

class Student: private Person
{
    private :
      int fee;
      char course[100];

    public :
      void sets(int,char[],char[],int);
      void displays();
};

void Student::sets(int id,char n[],char c[],int f)
{
    setp(id,n);
    //remaining program
    cout<<"Enter the course fee\n ";
    cin>>fee;
}

void Student::displays()
{
    displayp();
    cout<<"course :"<<course<<"\nFee :"<<fee<<"\n";
}

int main()
{
    Student s;
    s.sets();
    s.displays();

    return 0;
}
