/*
--> class function and data are private by default, struct functions and data are public by default.
1] How to define member function outside the class?
     i) Why we need to define function  outside of class in c++?
              -> because when we need define function within class then function work as inline function .
              -> if your function defination is to small like function say dispaly(),having one line defination can be defined inside class.but otherwise 
                 its good practice to define function outside class .
     
     ii) what is inline function?
     -> inline function is a facility of c++ where we can use for writing small 
        logics because inline functions are faster than normal function but inline
        function normally use for writing single line logics or 2 lines of logics.
        SYNTAX : 
                 inline return type functionname(parametrs)
                 {
                        write here your logics
                 }

*/

#include<iostream>
using namespace std;

inline int getSquare(int x)
{
        return x*x;
}

int main()
{
        int result=getSquare(5);
        cout<<"\nSquare is "<<result;

        return 0;
}

/*
NOTE : if we want to work with inline function we need to know the some important points.
       a) Avoid writing larger logics
       b) Try to avoid writing loops,recursion in inline function and if we 
          use it then inline not work as inline it work as normal function.
          
*/

