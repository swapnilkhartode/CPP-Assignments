/*
1)vector::emplace() -> It extends the container by inserting new element at position. Reallocation happens only if there is a need for more space.
                       here the container size increased by one.
        Syntax : iterator = vectorname.emplace(const_iterator_position,element);

                     a)Parameter :
                            1) position : it specifies the iterator pointing to the position in the container where the new element is to be inserted.
                            2) element : it specifies the element to be inserted in the vector container.
                     b) Return Value : The function returns an iterator that points to the newly inserted element.
        Disadvantage : No boundary checking

2)vector::emplace_back() -> It is used to insert new element into the vector container, the new element is added to the end of the vector. Reallocation happens only if there is a need for more space.
                       here the container size increased by one.
        Syntax :  vectorname.emplace(element);

                     a)Parameter :
                            1) element : it specifies the element to be inserted in the vector container.
                                          parameter should be of the same type as that of the container, otherwise, an error is thrown.
                     
        


*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1{10,20,30};

    // insert element by emplace function at front
    auto it=v1.emplace(v1.begin()+5,15);

    cout<<"Printing the elements of the vector"<<endl;
    for(auto it=v1.begin();it!=v1.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    v1.emplace_back(100);

    cout<<"Printing the elements of the vector emplace_back()"<<endl;
    for(auto it=v1.begin();it!=v1.end();++it)
    {
        cout<<*it<<" ";
    }

}