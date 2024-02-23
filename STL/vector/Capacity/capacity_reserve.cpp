/*
1] vector::reserve():- 1. It indicates that the vector is created such that it can store at least the number of specified elements 
                          without having a reallocating memory.
                       2. void reserve(size_type n)
                       3. Return type:none.
                       4.Arguments : n which denotes the no of elements to be stored in vector.
                       5. Requests that vector is large enough to store n elements in the least. if the current vector capacity is less than n, then 
                          reallocation will take place. in other cases , realloction will not happen, Function does not modify existing elements in the 
                          vector.
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N;
    vector<int>v1;
    v1.reserve(N);
}