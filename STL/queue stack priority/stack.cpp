/*
Stack :- 1. Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end(top) and a 
            an element is removed from that end only.
         2. there is difference between stack and queue , then just have real life examples
            stack -> stacks of books we can take the top book easily .
            queue -> when you have to stand in queue front of ATM for taking out of the cash.
*/
#include<iostream>
#include<stack>

using namespace std;


int main()
{
    stack<int>s1;
    s1.push(21);
    s1.push(22);
    s1.push(24);
    s1.push(25);

    int num = 0;

    s1.push(num);
    
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
    s1.pop();
    

    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}