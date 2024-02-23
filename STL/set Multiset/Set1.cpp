#include<iostream>
#include<set>  /*is a associative container in which each element has to be unique because the value of the elements identifies it.  the values are sorted in a specific soretd order 
i.e. either ascending or descending.

  the 
  set<data type> set_name;
  set<int> val;  defining empty set.
  set<int> val = {6, 10, 5, 1};  defining set with values.
  it inserts elemnts by using BST(binary search tree.
  -> element ko dalne ke baad usko modify nahi kr sakte hai, dale ya to aap delete kare do hi cheeze hoti hai.
  -> at the time of retiving data it gives data in sorted order.

  -> it is slow as compared to unodered set
  -> at time of element fetching 

  - by default it prints in ascending order
  */
  

using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for(auto i : s)
    {
        cout<<i<<endl;
    }
    set<int>::iterator it = s.end();
    --it;
    s.erase(it);  // it erase first element
    cout<<endl;
    for(auto i : s)
    {
        cout<<i<<endl;
    }
    
}