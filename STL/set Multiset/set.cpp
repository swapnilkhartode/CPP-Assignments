/*
set :- Set is a associate container used to store unique elements that are stored in a specific sorted order(Ascending or descending).
        defined inside the <set>   header file. use when we need to store unique elements and stored specially sorted order.
        The elements inside the set can be inserted or removed, but when inserted once, they cannot be modified.
        no duplicate values can be stored in the set because each value in the set is a key, and the set doesnt support indexing.
        so, the elements/values(keys) are the indexes themselves, and there cannot be more then one index.
        Also, the values in the set need to be accessed using the keys/values only.
        We can specify whether the elements will be sorted in ascending order or descending order by changing the syntax during the set declaration.
        By default set stores elements in ascending order, but if want the elements to be sorted in descending order, you will need to write
        greater<datatype>  ,  set<datatype, greater<datatype>>setname;
        Syntax : set<datatype> setname; // defining empty set.
                 set<int>val={6,10,5,1}; // defining a set with value.


                 set<int>s1{10,20,30,40};
                 set<int>s2(s1); // now here , the values of the set s1 will be copied to the set s2.

                 int arrr[]={1,2,3,4,5,6};
                 set<int>s3(arr, arr+3); subarray of length 3 will be copied to the set.

                 insertion : insert()
                 deletion  : erase()
                 Traversal : begin(),end()
        Set Sorted in Descending order :-
          by default, the std::set is sorted in ascending order.
          However, we have the option to change the sorting order by using the following syntax.
               set<dataType , greater<dataType>> setname;

    Properties of set :-
      1) Storing order :- The set stores the elements in sorted order.
      2) Values characteristics :- All the elements in a set have unique values.
      3) Values Nature :- The values of the element cannot modified once it is added to the set, though it is possible to remove and then the modified
                        value of the element. thus the values are immutable.
      4) Search Technique :- set follow the binary search tree implementation.
      5) Arranging Order:- The values in a set are unindexed.(to store elements in an unsorted order, unordered_set() can be used.)


      A] set::find(const g):- returns an iterator to the element 'g' in the set if found , else returns then the iterators points to the position just after the last element in the set.
      B] set::count(const g):- returns 1 or 0 based on whether the element 'g' is present in the set or not.
                               it returns 1 if the value is present in the set container.
                               it returns 0 if it is not present in the container.
        DIFFERENCE BETWEEN COUNT() AND FIND() :-
        count() returns 0 or 1 depending upon whether the element is not present or present.
        find() returns an iterator pointing to the value if present else to the last value in the set.


      Difference between set and unordered set.

      1. set stores element in sorted order wheareas unordered set stores elements in an unsorted order.
      2. set stores unique elements only wheareas unorderd set srores only unique values.
      3. set uses binary seach trees for implementation. unordered set uses Hash tables for implementation.
      4. more then one element can be erased by giving the starting and ending iterator. we can erase that element for which the iterator position
         is given.
      5. set<dataType>setname; .  unordered_set<datatype>unorderedsetname; 


*/

#include<iostream>
#include<set>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int>s{12,43,234,65,34,54,3,12,43};
    set<int>::iterator it;   // creating the iterator
    cout<<"First way print the elements of the set"<<endl;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<' ';
    }
    cout<<endl<<endl;
    cout<<"second way print the elements of the set"<<endl;
    for(auto i:s)
    {
        cout<<i<<' ';
    }

    cout<<endl<<endl<<"Set in descending order : "<<endl;
    set<int,greater<int>>s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);
    set<int>::iterator it1;   // creating the iterator
    cout<<"First way print the elements of the set"<<endl;
    for(it1=s1.begin();it1!=s1.end();it1++)
    {
        cout<<*it1<<' ';
    }
    cout<<endl<<endl;
    cout<<"second way print the elements of the set"<<endl;
    for(auto i:s1)
    {
        cout<<i<<' ';
    }
    // remove all elements upto 43 in s
    //s.erase(s.begin(),s.find(43));

    cout<<endl<<"First way print the elements of the set"<<endl;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<' ';
    }

    auto pos =s.find(12);
    cout<<endl<<*pos;
    /*
    distance in c++ :- if we have two iterators and we want to find the total no, of elements between the two iterators, then that is facillated by distance.
                       .
                       syntax :- distance(InputIterator first, InputIterator last);
                           here, first and last are input iterators between which we have to calculate distance.
                        Returns :- Number of elements between first and last.
    */
    if(pos != s.end())
    {
        cout<<"Element found at position : "<<distance(s.begin(),pos)<<endl;
    }
    else
    {
        cout<<"Element not present in set";
    }
     auto pr=s.count(12);

     if(pr ==1)
     {
        cout<<endl<<"Element is found"<<endl;

     }
     else
     {
        cout<<"element is not found";
     }
     cout<<pr;
    
     return 0;

}