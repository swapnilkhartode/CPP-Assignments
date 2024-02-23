/*
  iii)  vector::rbegin()-> it returns a reverse iterator pointing to the last element in the vector(container).
                Syntax :   vectorname.rbegin()
                         1) parameters : No parameters are passed.
                         2) Return value: returns a reverse iterator pointing to the last element in the vector
                Time Complexity : O(1)
  iV)  vector::rend()-> it returns a   reverse iterator pointing to the preceding(before the first element)  first element in the vector.
                           basically considered as reverse beginning.
                Syntax :   vectorname.rend()
                         1) parameters : No parameters are passed.
                         2) Return Value: returns a  iterator pointing preceding(before the first element) the first element in the vector.
                Time Complexity : O(1)"
                
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1{1,2,3,4,5,6};

    cout<<"The last element is : "<<*v1.rbegin()<<endl;

    //prints all the elements
    cout<<"The vector elements in the reverse order are "<<endl;
    for(auto i=v1.rbegin();i!=v1.rend();i++)
    {
        cout<<*i<<" ";
    }
    return 0;

}