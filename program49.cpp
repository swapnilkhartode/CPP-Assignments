/*
Example: Suppose consider we want to design application for stock management of product for small shop 
and we want to give the two types of logins to application for access database
1. for owner login i.e Admin
2. user login i.e Employee

Admin: we want to give all details related product to admin i.e name ,dname,cname,pprice,sprice etc
Employee: we want to give specified info access to employee i.e name,cname,sprice hide the pprice and dname from employee.

*/

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Product
{
    private : 
      int id;
      char name[90],dname[90],cname[90];
      int pprice,sprice;
      FILE *fptr;

    public :
        void validateUser(char loginType[])
        {
            if(strcmp(loginType,"admin")==0)
            {
                fptr=fopen("Product1.txt","r");

                while(fscanf(fptr,"%d%s%s%s%d%d",&id,&name,&dname,&cname,&pprice,&sprice)!=EOF)
                {
                      cout<<id<<"\t"<<name<<"\t"<<dname<<"\t"<<cname<<"\t"<<pprice<<"\t"<<sprice<<"\n";


                }
                fclose(fptr);
            }
            else if(strcmp(loginType,"employee")==0)
            {
                fptr=fopen("Product1.txt","r");

                while(fscanf(fptr,"%d%s%s%s%d%d",&id,&name,&dname,&cname,&pprice,&sprice)!=EOF)
                {
                    cout<<id<<"\t"<<name<<"\t"<<cname<<"\t"<<sprice<<"\n";
                }
                fclose(fptr);
            }

            else
            {
                cout<<"\nInvalid User";
            }
        }
};

int main()
{
    Product p;
    char loginType[90];
    cout<<"\nEnter login Type of user\n";
    cin>>loginType;
    p.validateUser(loginType);

    return 0;
}