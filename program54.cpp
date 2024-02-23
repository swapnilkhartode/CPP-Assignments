#include<iostream>
using namespace std;

class SortArr
{
    private :
      int *ptr;

    public : 
       void setArray(int a[])
       {
           ptr=a;
       }
       void getSortArray()
       {
          for(int i=0;i<5;i++)
          {
            for(int j=0;j<5;j++)
            {
                if(ptr[i] < ptr[j])
                {
                    int temp= ptr[i];
                    ptr[i]=ptr[j];
                    ptr[j]= temp;
                }
            }
          }

       }
};

int main()
{
    SortArr s1;
    int a[5];
    cout<<"\nEnter the elements in the array\n";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    s1.setArray(a);
    s1.getSortArray();
    cout<<"\n After Sorting\n";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }

    return 0;

}