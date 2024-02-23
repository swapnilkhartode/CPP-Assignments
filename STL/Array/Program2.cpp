#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,6> myarray {1,2,3,4,5,6};
    array<int,6> myarray2={101,102,103,104,105,106};

    // Printing the array elements using at()
    cout<<"The array elements are using at() : ";
    for(int i=0;i<6;i++)
    {
        cout<<myarray.at(i)<<"\t";
    }
    cout<<myarray.at(10)<<"\t";
    cout<<endl;

    // Printing the array elements using get()
    cout<<"The array elements are using get() : ";
   
        cout<<get<0>(myarray)<<"  "<<get<1>(myarray)<<"  ";
        cout<<get<2>(myarray)<<"  "<<get<3>(myarray)<<"  ";
        cout<<get<4>(myarray)<<"  "<<get<5>(myarray)<<"  ";

        cout<<endl;
        

    // Printing the array elements using reference operator[]
    cout<<"The array elements are using operator[]: ";
    for(int i=0;i<6;i++)
    {
        cout<<myarray[i]<<"\t";
    }
    cout<<endl;
    // front()- This reference to the first element of array
    // back()- This reference to the last element of array"

    // Printing first element of the array
    cout<<"first element of the array is : ";
    int &a=myarray.front();
    cout<<a<<endl;

    // Printing Last element of the array
    cout<<"Last element of the array is : ";
    int &b=myarray.back();
    cout<<b<<endl;

    // change the first and last element using these references .
    a=10;// now 1 change to 10
    b=60;// now 6 change to 60

    cout<<"Lets Print Array Now"<<endl;
    for(auto x : myarray)
    {
        cout<<x<<" ";
    }
     cout<<endl;
    //size() - it returns the number of elements in array. This is a property that C-style arrays lack.
    //max_size() - it returns maximum number of elements array can hold. i.e, the size with which array is declared. The size() and max_size()
    // returns the same value.

    cout<<"Printing number of array elements : "<<myarray.size()<<endl;

    cout<<"Printing maximum elements array can hold : "<<myarray.max_size()<<endl;

    // swap():- it swaps all elements one array with other.
     // swapping myarray2 with myarray
     myarray.swap(myarray2);
     cout<<"First array elements after swapping"<<endl;
     for(int i=0;i<myarray.size();i++)
     {
        cout<<myarray[i]<<" ";
     }
     cout<<endl;
     cout<<"second array elements after swapping"<<endl;
     for(int i=0;i<myarray2.size();i++)
     {
        cout<<myarray2[i]<<" ";
     }
     cout<<endl;

     // empt(y()  -> this function returns true when the array size is zero else return false.
     // fill()    -> This function is used to fill the entire array with a particular value.
     if(myarray.empty())
     {
        cout<<"Array Empty"<<endl;
     }
     else
     {
        cout<<"Array not Empty"<<endl;
     }
     // filling array with 0
     myarray.fill(0);
     cout<<"After Filling Operation is : ";
     for(int i=0;i<myarray.size();i++)
     {
        cout<<myarray[i]<<" ";
     }
     cout<<endl;
     /* data() - (it access the base adress of array )is an STL in c++ which returns a direct pointer to the memory array used internally by the array to store its owned elements.
       syntax:-  arrayname.data(); This function does not accept any parameter. This function returns a pointer to the first element in the array 
       which is used internally by the array*/

       int* pos=myarray2.data();
       cout<<"Prints the array : ";
       for(int i=0;i<myarray2.size();i++)
       {
           cout<<*pos++<<" ";
       }
       cout<<endl;

    return 0;


}
