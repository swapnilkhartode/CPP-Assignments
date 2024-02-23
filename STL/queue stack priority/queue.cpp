/*
Queues :-    1. Queue are a type of container adaptors that operate in a first in first out(FIFO) type of arrangement.
             2. Elements are inserted at the back(end) and are deleted from the front.
             3. header file #include<queue>
             4. push() -> inserts an element at the back of the queue.
             5. pop()  -> removes an element from the front of the queue.
             6. front() -> returns the first element of the queue.
             7. back() -> returns the last element of the queue.
             8. size() -> returns the number of elements in the queue.
             9. empty()-> returns true if the queue is empty.
            
*/

#include<iostream>
#include<queue>

using namespace std;



void showq(queue<int>q)
{
    while(!q.empty())
    {
        cout<<" "<<q.front();
        q.pop();
    }
    cout<<endl;
}
int main()
{
    // craete queue of integer data type
    queue<int>q1;
    queue<int>q2;
    
    q1.push(10);
    q1.push(20);
    q1.push(30);

    cout<<"The queue q1 is : ";
    showq(q1);

    cout<<"The size of q1 is : "<<q1.size()<<endl;
    cout<<"q1.front() : "<<q1.front()<<endl;
    cout<<"q1.back() : "<<q1.back()<<endl;
    cout<<"q1.pop() : ";
    q1.pop();
    showq(q1);

    q2.push(4);
    q2.push(5);
    q2.push(6);

    cout<<"The second queue is : ";
    showq(q2);

    q1.swap(q2);

    cout<<"The second queue after swap() operation : ";
    showq(q2);
    cout<<"The first queue after swap() operation : ";
    showq(q1);

    cout<<q1.empty();

    return 0;
}