/*
1) vector::resize() :- 1.Resizes the container so that it contains 'n' elements. *** Most imp resize changes the size of vector but does not destroyes
                          the elements.
                       2.This function alters the containers content in actual by inserting or deleting the elements from it.
                          it happens so
                                a)If the given value of n is less than the size at present then extra then extra elements are deleted.
                                b)If n is more than current size of container then upcoming elements are inserted at the end of vector.
            Syntax : vectorname.resize(int n, int val);
                     where, 
                         n = resized size as per your choice
                         val = value that can be initialized at the newly created spaces only if vector size is less than resize size parametr.
                     
            A] If resizing(size parameter ) parameter is less than size of vector container.
                always last values are deleted.
                Example : 
                     Contents of the vector before resizing : 1 2 3 4 5
                       v1.resize(4);
                     Contents of the vector after resizing : 1 2 3 4
            
            B] If resizing(size parameter ) parameter is greater than size of vector container.
                always  values inserted at last(by default 0 will be added at that places).
                Example : 
                     Contents of the vector before resizing : 1 2 3 4 5
                       v1.resize(8);
                     Contents of the vector after resizing : 1 2 3 4 5 0 0 0
            C] Size of the vector container is increased and new elements are initialized with specified value.
                Example : 
                     Contents of the vector before resizing : 1 2 3 4 5
                       v1.resize(12,9);
                     Contents of the vector after resizing :  1 2 3 4 5 9 9 9 9 9 9 

*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1{1,2,3,4,5};
    
    // displayiong the contents before resizing.
    cout<<"Contents of vector before resizing "<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    // vector is resized
     v1.resize(4);

   // displaying the content after resizing
     cout<<"Contents of vector after resizing "<<endl;
     for(int i=0;i<v1.size();i++)
     {
        cout<<v1[i]<<" ";
     }
    cout<<endl;
    
    // vector is resized
     v1.resize(12);
     // displaying the content after resizing
     cout<<"Contents of vector after resizing "<<endl;
     for(int i=0;i<v1.size();i++)
     {
        cout<<v1[i]<<" ";
     }
    cout<<endl;

    // vector is resized
     v1.resize(4);

    // displaying the content after resizing
     cout<<"Contents of vector after resizing "<<endl;
     for(int i=0;i<v1.size();i++)
     {
        cout<<v1[i]<<" ";
     }
    cout<<endl;

    // vector is resized
     v1.resize(12,9);

    // displaying the content after resizing
     cout<<"Contents of vector after resizing "<<endl;
     for(int i=0;i<v1.size();i++)
     {
        cout<<v1[i]<<" ";
     }
    cout<<endl;




    return 0;

}