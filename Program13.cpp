// Linear search with two methods 

#include<iostream>
using namespace std;

class Search
{
    private :
      int *ptr,skey,i;

    public :
      void setArray(int Brr[6],int key)
      {
         ptr=Brr;
         skey=key;
      }
      int getIndex()
      {
        for(i=0;i<6;i++)
        {
            if(ptr[i]== skey)
            {
                return i;
            }
        }
        return i;
      }
};

int main()
{
    Search s;
    int Arr[6],skey;
    cout<<"Enter the values in an Array\n";

    for(int i=0;i<6;i++)
    {
        cin>>Arr[i];
    }
    cout<<"Please Enter the skey\n";
    cin>>skey;
    s.setArray(Arr,skey);
    int result = s.getIndex();
    if(result==6)
    {
        cout<<"Element Not found at \n";
    }
    else
    {
        cout<<"Element found at index "<<result;
    }

    return 0;

}