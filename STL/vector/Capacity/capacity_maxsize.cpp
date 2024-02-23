/*1.vector::max_size()-> The max_size() function returns the maximum number of elements that can held by the vector container.
            Syntax :   vectorname.max_size()
                         1) parameters : No parameters are passed.
                Time Complexity : O(1)              
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1;
    cout<<"max_size of vector 1 = "<<v1.max_size()<<endl;
    vector<int>v2;
    cout<<"max_size of vector 2 = "<<v2.max_size()<<endl;

}