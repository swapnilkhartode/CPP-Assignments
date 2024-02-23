/*
Deque : Deque or double ended queue are sequence containers with the feature of expansion and contraction on both the ends.
        They are simillar to vectors , but are more efficient in the case of insertion and deletion of elements at the both ends.
        unlike, vectors, contiguous storage allocation may not be guaranteed.
1)deque::push_front()  ->  this function is used to push elements into a deque from the front. the new value is inserted into the deque at the beginning
                           , before the current first element and the container size is increased by 1.
*/

#include<iostream>
#include<deque>
using namespace std;

void showdq(deque<int> g)
{
    deque<int>::iterator it;

    for(it=g.begin();it != g.end();++it)
    {
        cout<< " "<<*it;
    }
    cout<<endl;
}
int main()
{
    deque<int>d1;
    d1.push_back(10);
    d1.push_front(20);
    d1.push_back(30);
    d1.push_front(15);

    
    cout<<"Printing elements of deque "<<endl;
    showdq(d1);

    cout<<"Size of deque : "<<d1.size();
    
    cout<<endl<<"Max size of queue is : "<<d1.max_size()<<endl;
    cout<<"d1.front()"<<d1.front()<<endl;
    cout<<"d1.front()"<<d1.back()<<endl;
    d1.pop_front();
    showdq(d1);
    d1.pop_back();
    showdq(d1);

}