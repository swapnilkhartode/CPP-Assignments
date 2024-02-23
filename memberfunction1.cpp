//Example : define member function with argument inside the class.

#include<iostream>
using namespace std;

class Person
{
    int id;
    char name[100];

    public :
      void setp()
      {
        cout<<"Enter the Id:";
        cin>>id;
        cout<<"Enter the name:";
        cin>>name;

      }

      void displayp()
      {
        cout<<endl<<"Id :"<<id <<"\nName : "<<name<<"\n";
      }
};

class Student: private Person
{
    private :
       char course[50];
       int fee;
    public :
        void sets()
        {
            setp();
            cout<<"Enter the course Name :";
            cin>>course;
            cout<<"Enter the course fee\n ";
            cin>>fee;
        }
        void displays()
        {
            displayp();
            cout<<"course :"<<course<<"\nFee :"<<fee<<"\n";
        } 
};

int main()
{
    Student s;
    s.sets();
    s.displays();

    return 0;
}