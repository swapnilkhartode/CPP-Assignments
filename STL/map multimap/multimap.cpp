/*
Multimap is an associaive container in STL that provides the functionality of a map but allows multiple elements to have equivalent keys.
<map> header file.
Synatax : multimap<key_type , Value_Type> multimap_name = {{key1 , value1},{key2 , value2},{key3 , value3},...};
*/
#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<int,string>mm={{1,"One"},{2,"Uno"},{1,"Two"}};

    cout<<"Display key-value pairs : "<<endl;

    for(auto keyvalue : mm)
    {
        int key=keyvalue.first;
        string value=keyvalue.second;

        cout<<endl<<key<< " - "<<value<<endl;
    }
}
