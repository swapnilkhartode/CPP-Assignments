/*
Q.what is encapsulation?
-> Encapsulation means to hide the implementation detail from end user at 
implementation level called as encapsulation means we declare variable of class
 as private and access via public function called as encapsulation because when we
  declare your variable or data as priate then we cannot access that variable outside of 
  class using its object you can access that variable using public function and function
   contain logic that logic decide data is accessible or not outside of class called as encapsulation.


Note : This class indicate implementation of encapsulation
       because we declare variable as private and we provide access of variable outside of class.

       Note: the major goal of encapsulation is data security here data means variable so when we declare variable as private
        then cannot access outside of class using its object so we can say it is data security 
*/

#include<iostream>
using namespace std;

class Product
{
    private :
       int id;
       char name[90];
       int price;
    public :
       void setData()
       {
              cout<<"\nEnter product details name , id , price\n";
              cin>>name>>id>>price;
       }
       void showData()
       {
          cout<<name<<"\t"<<id<<"\t"<<price;
       }
};