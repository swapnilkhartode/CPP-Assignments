 /*
 v)  vector::crbegin()-> it returns a constant reverse iterator pointing to the last element in the vector(container).
                Syntax :   vectorname.crbegin()
                         1) parameters : No parameters are passed.   
                Time Complexity : O(1)
  vi)  vector::crend()-> it returns a constant reverse iterator pointing to the preceding(before the first element) the first element in the vector.
                           basically considered as reverse end.
                Syntax :   vectorname.crend()
                         1) parameters : No parameters are passed.   
                Time Complexity : O(1)"
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1{1,2,3,4,5,6};

    cout<<"Output of crbegin and crend "<<endl;
    for(auto i=v1.crbegin();i!=v1.crend();i++)
    {
        cout<<*i<<endl;
    }
    vector<int>::iterator p;
    //p=v1.crbegin(); -> it gives compile time error because its a constant iterator
    return 0;
}