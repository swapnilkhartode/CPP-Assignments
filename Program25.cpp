#include<iostream>
using namespace std;

class Per
{
    private:
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
        return (s1+s2+s3+s4+s5+s6);
       }

};

int main()
{
  Per p;
  p.setSubjects(60,60,60,60,60,60);// So better way passing multiple parameters we can pass array as a parameter in function. 
  int Result=p.getPer();
  cout<<"\nTotal Percentage is "<<Result;

  return 0;


}