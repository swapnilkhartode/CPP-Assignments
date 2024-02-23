// Example : Define member function without argument outside the class 

#include<iostream>
using namespace std;

class Person
{
    private :
      int id;
      char name[100];
    public :
      void setp();
      void displayp();
};  // semicolon is only for class
// return type classname :: member function

void Person::setp()
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
      void sets();
      void displays();
};

void Student::sets()
{
    setp();
    cout<<"Enter the course Name :";
    cin>>course;
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
