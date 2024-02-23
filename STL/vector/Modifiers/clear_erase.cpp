/*
1)
vector::clear() :- The clear() function is used to remove all the elements of the vector container, thus making its size 0.\
        
        Syntax:- vectorname.clear();
                    a)Parameters : No parameters passed.
                    b)Result : All the elements of vectors are removed(or destroyed).
        Time Complexity : O(N)

2)
    vector::erase() :- The remove() function is used to remove elements from a container from the specified position or range.
        
        Syntax:- A) vectorname.erase(position);-> For deletion at specific position.
                 B) vectorname.erase(starting_position , ending_position);-> For deletion in range.
                    
                     a)Result : elements are removed from specified position of the container.
        Time Complexity : O(N)
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    cout<<"Printing Vector Elements Before Clear()"<<endl;
    for(auto i=v1.begin();i!=v1.end();++i)
    {
        cout<<" "<<*i;
    }

    v1.clear(); // vector becomes empty                                             clear()

    // Printing the vector
    cout<<endl<<"Printing Vector Elements after Clear()"<<endl;
    for(auto i=v1.begin();i!=v1.end();++i)
    {
        cout<<" "<<*i;  //No output
    }
    cout<<endl;
//------------------------------------------------------------------------------------
    vector<int>v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    cout<<"Printing Vector Elements Before erase()  one parameter"<<endl;
    for(auto i=v2.begin();i!=v2.end();++i)
    {
        cout<<" "<<*i;
    }
    cout<<endl;
    vector<int>::iterator t;

    t=v2.begin();
    v2.erase(t);                                               //    A
 
    // printing the vector

     cout<<"Printing Vector Elements After erase()  one parameter"<<endl;
    for(auto it = v2.begin(); it != v2.end(); ++it)
    {
        cout<<" "<<*it;
    }
    cout<<endl;
//--------------------------------------------------------------------------------------

    vector<int>v3;
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(3);
    v3.push_back(4);
    v3.push_back(5);
    cout<<"Printing Vector Elements Before erase() two parameter"<<endl;
    for(auto i=v3.begin();i!=v3.end();++i)
    {
        cout<<" "<<*i;
    }
    cout<<endl;
    vector<int>::iterator t1,t2;

    t1=v3.begin();
    t2=v3.end();
    t1++;  // survaticha iterator
    t2--;
    v3.erase(t1,t2);                                               //    B
 
    // printing the vector

     cout<<"Printing Vector Elements After erase() two parameter"<<endl;
    for(auto it = v3.begin(); it != v3.end(); ++it)
    {
        cout<<" "<<*it;
    }
    cout<<endl;

//--------------------------------------------------------------------------------------
    return 0;
}
