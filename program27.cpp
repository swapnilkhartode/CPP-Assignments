// WAP to create class name as FindMax with two functions 
// void setValue, getMax

#include<iostream>
using namespace std;

class FindMax
{

    private :
     int *ptr;

    public :
       void setValue(int Arr[])
       {
          ptr=Arr;
       }
       int getMax()
       {
           int iMax=0;
          for(int i=0;i<6;i++)
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
    FindMax fm;
    int a[6];
    cout<<"Enter the values in array\n";
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
    }

    fm.setValue(a);
    int result = fm.getMax();

    cout<<"Maximum element is "<<result<<"\n";

    return 0;
}