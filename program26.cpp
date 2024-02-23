// in prevoius program we pass 6 parameters of same type in function So better way passing multiple parameters we can pass array as a parameter in function.
#include<iostream>
using namespace std;

class Per
{
    private :
       int *ptr;

    public :
        void setArray(int arr[])
        {
            ptr=arr;
        }
        int Calper()
        {
            int agg=0;
            for(int i=0;i<6;i++)
            {
                agg=agg+ptr[i];
            }
            return agg/6;
        }
};

int main()
{
    Per p;  // object of a class
    int a[6];
    cout<<"Enter values in array\n";
    for(int i=0; i<6;i++)
    {
        cin>>a[i];
    }

    p.setArray(a);
    int result=p.Calper();
    cout<<"Total Percentage is "<<result<<"\n";

    return 0;
      
}