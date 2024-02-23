// Find max value from array and return it.

#include<iostream>
using namespace std;

class Max
{
    private :
      int *ptr;

    public :
       void setArray(int Brr[5])
       {
          ptr=Brr;
       }

       int getMax()
       {
          int iMax=0;
         for(int i=0;i<5;i++)
         {
            if(iMax < ptr[i])
            {
                iMax=ptr[i];
            }
         }
            return iMax;
       }
      
};

int main()
{
    Max m;
    int Arr[5];
    cout<<"Enter the values in an Array\n";
    for(int i=0;i<5;i++)
    {
        cin>>Arr[i];
    }
    m.setArray(Arr);
    int result=m.getMax();
    cout<<"The maximum number in the given array is "<<result;

    return 0;
}