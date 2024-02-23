/*
Priority Queue :- it is a type of container adapter , in which the top element of queue is either the largest or the smallest of all the elements
                  in the queue. however , the top element is always gtreatest by default.
                  queue works on the FIFO principle and priority_queue works on the principle of giving priority to the max or min element.
 

                  Difference between Priority queue and queue :-

                  priority :- 1) works on the principle of giving priority to the max or min element.
                  queue    :- 2) works on the FIFO principle

                  priority :- 1) data structure used to implement is heap or balanced binary search tree.
                  queue    :- 2) array or linked list.

                  priority :- 1) application are priority scheduling.
                  queue    :- 2) application are message queues.
*/
#include<iostream>
#include<queue>
using namespace std;

int main()
{
//-----------------------------------------------------------------------------------------
//               MAX_HEAP IMPLEMENTATION

    priority_queue<int>p;      // by default this is max_heap

    p.push(5); // Inserting 5 in a queue, top=5         5
    p.push(15); // Inserting 15 in a queue, top=15      15 5
    p.push(20); // Inserting 10 in a queue, top=15      15 10 5

    cout<<"Size of p : "<<p.size()<<endl;
    cout<<"Number of elements available in 'p' :";
    while(!p.empty())
    {
        int val=p.top();
        cout<<val<<" ";
        p.pop();
    }
    cout<<endl<<endl;
//------------------------------------------------------------------------------------------
//                  MIN_HEAP IMPLEMENTATION
    priority_queue<int,vector<int>,greater<int> > p1;  // min_heap
    /*
       int :- int is the type of elements you want to store in the priority queue, you can replace int with any other data type you need.
       vector<int> :- is the type of internal container used to store these elements. priority queue is not a container in itself but a container adopter.
                      it wraps other container,here we use vector , but you could choose a different container that supports front(),push_back(),pop_back() methods.
        greater<int> :- is a custom comparison function. this determines how the elements are ordered within the priority queue.
                        it means smallest element at the top of the queue.

        Above syntax may be difficult to remember, in case of numeric values, we can multiply the values with -1 and use max heap to get the 
        effect of min heap
    */

    p1.push(5); // Inserting 5 in a queue, top=5         5
    p1.push(15); // Inserting 5 in a queue, top=5        5 15
    p1.push(20); // Inserting 5 in a queue, top=5      5 10 15

    cout<<"Size of p : "<<p1.size()<<endl;
    cout<<"Number of elements available in 'p' :";
    while(!p1.empty())
    {
        int val=p1.top();
        cout<<val<<" ";
        p1.pop();
    }
    


    priority_queue<int> pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    pq1.push(40);

    priority_queue<int> pq2;
    pq2.push(100);
    pq2.push(200);
    pq2.push(300);
    pq2.push(400);

    pq1.swap(pq2);
    cout<<endl;
    cout<<"Number of elements available in 'pq1' :";
    while(!pq1.empty())
    {
        int val=pq1.top();
        cout<<val<<" ";
        pq1.pop();
    }
    cout<<endl<<"Number of elements available in 'pq2' :";
    while(!pq2.empty())
    {
        int val=pq2.top();
        cout<<val<<" ";
        pq2.pop();
    }
}