// Program to visualize the iterators in the vector
/*
# VArious functions in vectors are :
  Iterators :
  i)  vector::begin()-> begin function is used to return an iterator pointing to the first element of the vector container.
                Syntax :   vectorname.begin()
                         1) parameters : No parameters are passed.
                         2) Return Type: This function returns a biderectional iterator pointoing to the firts element.
                Examples : 
                         Input : myvector{1,2,3,4,5};
                                 myvector.begin();
                         Output: returns an iteratoer to the element 1

                         Input : myvector{"This","is","Vector"};
                                 myvector.begin();
                         Output: returns an iteratoer to the element This
                Time Complexity : O(1)
  ii) vector::end()-> end function is used to return an iterator pointing next to last element of the vector container.
                Syntax :   vectorname.end()
                         1) parameters : No parameters are passed.
                         2) Return Type: This function returns a biderectional iterator pointoing to next last element.
                Examples : 
                         Input : myvector{1,2,3,4,5};
                                 myvector.end();
                         Output: returns an iteratoer to the element 5

                         Input : myvector{"This","is","Vector"};
                                 myvector.end();
                         Output: returns an iterator to the element Vector
                Time Complexity : O(1)
  iii)  vector::cbegin()-> cbegin function is used to iterate container.it returns a constant iterator pointing to the first element in the vector.
                           this iterator cannot modify the contents of the vector.
                Syntax :   vectorname.cbegin()
                         1) parameters : No parameters are passed.
                         2) Return Type: constant random access iterator points to the beggining of the vector.
                Time Complexity : O(1)
  iV)  vector::cend()-> cbegin function is used to iterate container.it returns a constant iterator pointing next to the last element in the vector.
                           this iterator cannot modify the contents of the vector.
                Syntax :   vectorname.cbegin()
                         1) parameters : No parameters are passed.
                         2) Return Type: constant random access iterator points next to the last element of the vector.
                Time Complexity : O(1)
   v)  vector::crbegin()-> it returns a constant reverse iterator pointing to the last element in the vector(container).
                Syntax :   vectorname.crbegin()
                         1) parameters : No parameters are passed.   
                Time Complexity : O(1)
  vi)  vector::crend()-> it returns a constant reverse iterator pointing to the preceding(before the first element) the first element in the vector.
                           basically considered as reverse end.
                Syntax :   vectorname.crend()
                         1) parameters : No parameters are passed.   
                Time Complexity : O(1)"
  
  vii)  vector::cbegin()-> cbegin function is used to iterate container.it returns a constant iterator pointing to the first element in the vector.
                           this iterator cannot modify the contents of the vector.
                Syntax :   vectorname.cbegin()
                         1) parameters : No parameters are passed.
                         2) Return Type: constant random access iterator points to the beggining of the vector.
                Time Complexity : O(1)
  viii)  vector::cend()-> cend function is used to iterate container.it returns a constant iterator pointing next to the last element in the vector.
                           this iterator cannot modify the contents of the vector.
                Syntax :   vectorname.cend()
                         1) parameters : No parameters are passed.
                         2) Return Type: constant random access iterator points next to the last element of the vector.
                Time Complexity : O(1)"
                
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1;
    for(int i=1;i<=5;i++)
    {
        v1.push_back(i);
    }
    cout<<"Output of begin() and end() "<<endl;
    for(auto i=v1.begin(); i!=v1.end();++i)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Output of cbegin() and cend() "<<endl;
    for(auto i=v1.cbegin(); i!=v1.cend();++i)
    {
        cout<<*i<<" ";
    }

}