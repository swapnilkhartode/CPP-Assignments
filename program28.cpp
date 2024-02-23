#include<iostream>
using namespace std;

class LinearSearch
{
    private :
      int skey,*ptr;
    
    public :
       void setValue(int Arr[],int key)
       {
           ptr=Arr;
           skey=key;
       }
       int getIndex()
       {
            int i=0,flag=-1; // instead of set flag=0 we can set flag=-1 because index start from zero.
            for(i=0;i<6;i++)
            {
                if(skey==ptr[i])
                {
                    flag=i;
                    break;
                }
            }
            return flag;
       }

};

int main()
{
    LinearSearch ls;
    int skey,a[6];
    cout<<"Enter the search key\n";
    cin>>skey;
    cout<<"Enter the elements in the array\n";
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
    }
    ls.setValue(a,skey);
    int result = ls.getIndex();
    if(result!=-1)
   {
        cout<<"Element is found at index "<<result<<"\n";
    }
    else
    {
        cout<<"The element is not Found\n";
    }


}