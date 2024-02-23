#include<iostream>
using namespace std;

class Per
{
    private :
      int *ptr;

    public :
       
       void setArray(int Brr[6])
       {
          ptr=Brr;
       }

       int calPer()
       {
         int agg=0;
         for(int i=0;i<6;i++)
         {
            agg = agg + ptr[i];
         }

         return(agg/6);

       }
};

int main()
{
    Per p;
    int Arr[6];
    cout<<"Enter values in the Array\n";
    for(int i=0;i<6;i++)
    {
        cin>>Arr[i];
    }

    p.setArray(Arr);
    int result = p.calPer();
    cout<<"Percentage is "<<result;

    return 0;
}