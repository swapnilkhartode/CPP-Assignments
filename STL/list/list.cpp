/*
List : 1.Lists are sequence containers that allow non-contiguous memory allocation(store elements in non-contiguous manner).
       2.As compared to the vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick.
       3.It permits iteration in both direction . The list data can be retrieved in both directions. 
       4.list containers are constructed as doubly-linked lists, which allow each of the elements, they contain to be stored in non-continous location,
       5.we use the list to insert and remove items from any location.
       6.Each element with a connection to the element before it and a connection to the element after it.
       7.When we say a LIst, means we talking about a DOUBLY LINKED LIST.
       8.For implementing SINGLY LINKED LIST , we use a FORWARD LIST.
       9.It is defined inside <list> header file.

    Syntax : list<dataType>listname;

    Q.Why use List?
    -> 1. in comparison to other sequence containers such as array and vector, list performs better due to its non-contiguous storage.
       2. They perform better while inserting, moving,and removing items from any location. 
       3. Insertion and deletion of elements from the list take O(1) time.

    1)list::sort()  -> Sort function is used to sort the elements of the container by changing thier positions.
         
         Syntax : listname.sort();
                       a) Parameters : No parameters are passed.
                       b) Result : The elements of container are sorted in ascending order.

    2)list::splice()  -> 1.Splice function is used to transfer elemets from one list to another list. splice(jodne)
                         2.splice function can be used in three ways :
         Syntax : a)listname.splice(iterator position, list2);
                  b)listname.splice(iterator position, list2, iterator i);
                  c)listname.splice(iterator position, list2, iterator first , iterator last);
                       1) Parameters : This function accepts 4 parameters.
                                  a) Position :- Specifies the position where the elements are to be transferred.
                                  b) list2    :- It specifies a list object of the same type which is to be transferred.
                                  c) first,last :- iterators specifying range of elements in list2 which is to be transfered in list1.
                                                    the range includes all the elements between first and last, including the element
                                                    pointed by first but not the pointed by last.****
                       2) Return value : This function does not returns anything.

    3)list::unique()  -> unique function removes all duplicate consecutive elements from the list. it works only on sorted list.
         
         Syntax : listname.unique(BinaryPredicateName);
                       a) Parameters : the function accepts a single and optional parameter which is a binary predicate that returns tue if the elements 
                       should be treated as equal.
                          boolname(datatype a, datatype b)
                       b) Result : This function does not return anything .

    4)list::operator=  -> This operator is used to assign new contents to the container by replacing the existing contents.
                       -> It also modifies the size according to the new contents.
         
         Syntax : listname1 = (listname2);
                       a) Parameters : Another container of same type.
                       b) Result : The elements of container are sorted in ascending order.

    5)list::merge() -> This function merges two sorted lists into one list.
                       -> The list should be sorted in ascending order.
                       -> if no comparator is passed , then it merges two sorted lists into single sorted list.
                       -> if comparator is passed in the parameter, then it merges list accordigly doing internal comparisons.
         
         Syntax :   A] listname1.merge(listname2);
                       a) Parameters : single mandatory parameter listname2 which specifies the list to be merged into listname1.
                       b) return value : does not return anything.
                    B] listname1.merge(listname2 , comparator);
                       a) Parameters :   listname2 -> single mandatory parameter listname2 which is to be merged into listname1.
                                         comparator -> it is a binary predicate 
                       b) return value : does not return anything.

*/

#include<iostream>
#include<list>
using namespace std;



void showlist(list<int>l)
{
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

bool comparator(int first, int second)
{
    return first > second;
}
int main()
{
    list<int>l1,l2;

    for(int i=0;i<5;i++)
    {
        l1.push_back(i+1);
        l2.push_front(i+6);
    }
    cout<<endl<<" List 1 is : ";
    showlist(l1);
    cout<<endl<<" List 2 is : ";
    showlist(l2);
    cout<<endl;
    cout<<"l1.front() : "<<l1.front()<<endl;
    cout<<"l2.front() : "<<l2.front()<<endl;
    cout<<endl;
    cout<<"l1.back() : "<<l1.back()<<endl;
    cout<<"l2.back() : "<<l2.back()<<endl;

    cout<<endl;
    cout<<"l1.pop_front() : ";
     l1.pop_front();
     showlist(l1);
     cout<<endl;

    cout<<"l2.pop_front() : ";
     l2.pop_front();
     showlist(l2);
    cout<<endl;

    cout<<endl;
    cout<<"l1.pop_back() : ";
     l1.pop_back();
     showlist(l1);
     cout<<endl;

    cout<<"l2.pop_back() : ";
     l2.pop_back();
     showlist(l2);
    cout<<endl;

    cout<<"List 1 reverse : ";
    l1.reverse();
    showlist(l1);
    cout<<endl;
    cout<<"List 2 reverse : ";
    l2.reverse();
    showlist(l2);

    l2.reverse();

    l1.sort();
    l2.sort();
    cout<<endl;
    cout<<endl<<" List 1 is : ";
    showlist(l1);

    cout<<endl<<" List 2 is : ";
    showlist(l2);
//--------------------------------------------------------------------------------------------------------
//               1.  Transfer all the elements of list

      list<int>l3{9,5},l4{86,25},l5{3,4,20,3};

      // transfer all the elements of l2 in the l1
      l3.splice(l3.begin(),l4);
      cout<<endl<<"List 3 after splice operation is : ";
      showlist(l3);

      l5.splice(l5.end(),l3);
      cout<<endl<<"List 5 after splice operation is : ";
      showlist(l5);

//--------------------------------------------------------------------------------------------------------
//               2.  Transfer single element 

      list<int>l6{1,2,3},l7{4,5};
      list<int>::iterator it1;
      // it1 point to the 4
      it1=l7.begin();

      // transfer 4 at the end of l6
      l6.splice(l6.end(),l7,it1);
      cout<<endl<<"List 6 after splice operation is : ";
      showlist(l6);

//--------------------------------------------------------------------------------------------------------
//               2.  Transfer range of elements

      list<int>l8{1,2,3,4,5},l9{6,7,8};
      list<int>::iterator it2;
      // it1 point to the 1
      it2=l8.begin();
      
      // advance the iterator by 2 points
      advance(it2,2);
      // transfer 4 at the end of l6
      l9.splice(l9.begin(),l8,it2,l8.end());
      cout<<endl<<"List 9 after splice operation is : ";
      showlist(l9);
//--------------------------------------------------------------------------------------------------------
//                     unique property

          list<int>L{5,9,9,5,7,3,3,7};

          L.sort();
          cout<<endl<<"List L after sorting : ";
          showlist(L);

          L.unique();
          cout<<endl<<"List L after unique : ";
          showlist(L);

//--------------------------------------------------------------------------------------------------------
//                     operator= property

          list<int>L1{5,9,5,7},L2{101,102,103};

         L1=(L2);
          cout<<endl<<"List L1 after operator= : ";
          showlist(L1);
//--------------------------------------------------------------------------------------------------------
//                     merge() function

          list<int>L3{5,9,5,7},L4{101,102,103};

         L3.merge(L2);
          cout<<endl<<"List L3 after merge function : ";
          showlist(L3);
//--------------------------------------------------------------------------------------------------------
//                     merge() function with comparator

          list<int>L5{5,9,5,7},L6{101,102,103};

         L5.merge(L6,comparator);
          cout<<endl<<"List L5 after merge function with comparator : ";
          showlist(L5);

        
}