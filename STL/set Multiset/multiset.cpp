/*
Multiset are the associative containers like set that stores sorted values, but unlike set which store only unique keys , multiset can have duplicate 
keys . by default it uses < operator to comoare the keys.The value of the elements in a multiset can be inserted or deleted but cannot be altered.
(The element are always constant).

Multiset are simillar to the set, with the exception that multiple elements can have the same values.
erase(x) :- Removes all the occurences of x
*/


#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main()
{
    //empty multiset container
   multiset<int, greater<int> > ms; // descending order
   multiset<int> ms2; // ascending order
   //insert elements in random order
   ms.insert(40);
   ms.insert(30);
   ms.insert(60);
   ms.insert(20);
   ms.insert(50);

   // 50 will be added agin to the multiset unlike set
   ms.insert(50);
   ms.insert(10);

   cout<<endl<<"Printing multiset elements ms : ";
   multiset<int,greater<int> >::iterator itr;

   for(itr=ms.begin();itr!= ms.end();++itr)
   {
      cout<<*itr<<" ";
   }
   cout<<endl;

   // assining elements from ms to ms1
   multiset<int>ms1(ms.begin(),ms.end());
   cout<<endl<<"Printing multiset elements ms : ";
   multiset<int,greater<int> >::iterator itr1;

   for(itr1=ms1.begin();itr1!= ms1.end();++itr1)
   {
      cout<<*itr1<<" ";
   }
   cout<<endl;  

   // remove all elements upto element with value 30in ms1
   cout<<"ms1 after removal of elements less than 30 : "<<"\n";
   ms1.erase(ms1.begin(),ms1.find(30));
   for(itr1=ms1.begin();itr1!= ms1.end();++itr1)
   {
      cout<<*itr1<<" ";
   }
   cout<<endl; 

   cout<<"Remove all elements with value 50 in ms1 : "<<endl;
   int num=ms1.erase(50);
   for(itr1=ms1.begin();itr1!= ms1.end();++itr1)
   {
      cout<<*itr1<<" ";
   }
   cout<<endl; 

}




