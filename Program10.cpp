// WAP to calculate percentage and return it.

#include<iostream>
using namespace std;
class Per
{
    private :
     int s1,s2,s3,s4,s5,s6;

    public : 
        void setSubjects(int sub1,int sub2,int sub3,int sub4,int sub5,int sub6)
        {
            s1=sub1;
            s2=sub2;
            s3=sub3;
            s4=sub4;
            s5=sub5;
            s6=sub6;
        }
        int getPer()
        {
            return(s1+s2+s3+s4+s5+s6)/6;
        }
};

int main()
{
       Per p;
       p.setSubjects(60,60,60,60,60,60);
       int result=p.getPer();
       cout<<"\nTotal percentage is "<<result;
       return 0;
}