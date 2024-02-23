/*
Maps are associative containers that stored pair data . these pair data is called key-value pairs, where key is unique but value is not.
The elements in the map are internally sorted by thier keys. map header file in our program<map>
Synatax : map<key_type , Value_Type> map_name = {{key1 , value1},{key2 , value2},{key3 , value3},...};
The elements in a map are internally sorted by thier key.

*/

// create a map with integer keys and string values
#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string>m = {{1,"swapnil"},{2,"Blake"},{3,"Denise"}};
    // we can also initialise map elements without using the assignment operator =

    // we can use the [] operator to add key-value pairs to a map.
    /* map<int,string>m;
    */
   m[4]="Denis";

   // using insert function along the make_pair function
   m.insert(make_pair(4,"dell"));

   m[4]="ram";
  /*
  denis and ram paired with same value then denis is overwritten with ram.
  */

   for(int i=1; i<= m.size();i++)
   {
     cout<<"m["<< i<<"]: "<<m[i]<<endl;
   }

   // declare iterator
   map<int,string>::iterator iter;
   // use iterator to display map elements

   for(iter=m.begin();iter!=m.end();iter++)
   {
    cout<<iter->first<<" - "<<iter->second<<endl;     //cout<<(*iter).first<<"-"<<(*iter).second;
   }
   
   /*
   we can search a key in a map using the find() function. its syntax : mapname.find(key);

   -> find key 2 in the student map store the return value in iter .
      find() function returns an iterator pointing to the element if the element exists.
      if the element does not exists, then an iterator pointing to the end of the map i.e. mapname.end().
   -> DElete elements from map : erase and clear functions
      mapname.clear(); mapname.size();-> 0

      1. erase using key 
         mapname.erase("Rachel");
      2. erase using an iterator
         mapname.erase(itr);
    -> Delete range of elements :-
       erase()
       mapname.erase(itr_first , itr_last);  first removed last not removed.


   */

  iter = m.find(2);
   return 0;

    

}
