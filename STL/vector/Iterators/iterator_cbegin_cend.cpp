 /*
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
    vector<string>v1;
     /*vector<string>v1(10);     create vector of length 10
      vector<string>::iterator p;  create an iterator
      ASSIGN ELEMENTS IN VECTOR A VALUE
      p=v.begin();
      i=0;
      while(p!= v.end())
      {
        *p = i + 'a';
        p++;
        i++;
      }
      DISPLAY CONTENTS OF VECTOR
      cout<<"original contents:\n";
      p=v.begin();
      while(p != v.end())
      {
        cout<<*p<<" ";
      }

    */
    v1.push_back("First");
    v1.push_back("Second");
    v1.push_back("Third");
    v1.push_back("Fourth");
    v1.push_back("Fifth");
    cout<<"Contents of the vector begin() : " <<endl;
    for(auto i=v1.cbegin();i!=v1.cend();++i)
    {
        cout<<*i<<endl;
    }
    vector<string>::iterator p;
    //p=v1.cbegin();// it gives compile time error because iterator cannot modify the contents of the vector by using cbegin() function.

    cout<<"Contents of the vector end() : " <<endl;
    for(auto i=v1.cend();i>=v1.cbegin();--i)
    {
        cout<<*i<<endl;
    }
    return 0;
}