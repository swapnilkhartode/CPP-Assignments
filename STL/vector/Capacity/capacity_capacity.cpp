/*
1) vector::capacity() : 1.it is a built in function which returns the size of the storage space currently allocated for the vector,expressed in number
                        of elements.
                        2.This capacity is not necessarily equal to the vector size, it can be greater or equal.
                        3.When this capacity is exhausted and more is needed, it is automatically expanded by container.
                        4.The Theorotical limit on the size of vector is given by member max_size().
                Syntax : vectorname.capacity();
                         1]Parameters :  This function does not accept any parameter.
                         2] return value:  This function returns the size of the storage space currently allocated for the vector,expressed in 
                                           terms of elements.
                Time Complexity: O(1)
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1;
    for(int i=0; i<10;i++)
    {
        v1.push_back(i*10);
    }

    cout<<"The size of vector is "<<v1.size()<<endl;
    cout<<"The capacity of vector is "<<v1.capacity()<<endl;   /*
                                                                capacity increase 1 2 4 8 16 means extend krtana jevdhe elements
                                                                available ahet tyacha duppat memory allocate hote means 1x->2x 2x-1x=1x 
                                                                means 1x memory extend in the available memory
                                                                */  
    vector<int>v2;
    for(int i=0; i<100;i++)
    {
        v2.push_back(i*10);
    }

    cout<<"The size of vector is "<<v2.size()<<endl;
    cout<<"The capacity of vector is "<<v2.capacity()<<endl; // 1 2 4 8 16 32 64 128
}