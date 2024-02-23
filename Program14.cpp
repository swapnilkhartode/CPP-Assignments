#include<iostream>
using namespace std;

class TestArr
{
    private :
       int *ptr,Skey=0,temp;

    public :

      TestArr(int a[])  // arrange all elements in ascending order
      {
             ptr=a;
      }
      TestArr(int a[],int key)   // search element in array
      {
           Skey=key;
      }

      void ArrangeArray()
      {
        for(int i=0;i<6;i++)
        {
            for(int j=i;j<6;j++)
            {
                if(ptr[i] > ptr[j+1])
                {
                    temp=ptr[i];
                    ptr[i]=ptr[j+1];
                    ptr[j+1]=temp;

                }
            }
        }
      }

      void Display()
      {
        for(int i=0;i<6;i++)
        {
            cout<<ptr[i]<<"\t";
        }
      }




};

int main()
{
   
    int Arr[6],key=0;
    
    cout<<"Enter values in the Array\n";
    for(int i=0;i<6;i++)
    {
        cin>>Arr[i];
    }
    cout<<"Enter search key\n";
    cin>>key;
    TestArr l(Arr);
     TestArr l(Arr,key);
    l.ArrangeArray();
    l.Display();
    

    return 0;
}