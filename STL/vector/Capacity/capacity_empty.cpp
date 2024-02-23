/*1.vector::empty()-> The empty()function is used to check if the vector container is empty or not.
            Syntax :   vectorname.empty()
                         1) parameters : No parameters are passed.
                         2) Returns : True, if vector is empty. False, Otherwise
                Examples : 
                         Input : myvector{1,2,3,4,5};
                                 myvector.empty();
                         Output: False

                         Input : myvector{};
                                 myvector.size();
                         Output: True
                Time Complexity : O(1)
                
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1{};
    vector<int>v2{1,2,3,4,5,6};

    if(v1.empty())
    {
        cout<<" v1 is empty :return value True"<<endl;
    }
    else
    {
        cout<<"v1 is not empty :return value  False"<<endl;
    }

    if(v2.empty())
    {
        cout<<" v2 is empty :return value True"<<endl;
    }
    else
    {
        cout<<"v2 is not empty :return value  False"<<endl;
    }



}