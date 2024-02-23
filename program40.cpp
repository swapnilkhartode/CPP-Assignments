#include<iostream>
using namespace std;

/*
1) How to define function outside of class?
  -> if we want to define function outside of class we have to use scope resolution operator.
2) What is scope resolution and why use it?
  -> Scope resolution operator is used for identify member belong from which class 
  as well it help us access gloabl variable in block where local variable name is same
as global variable because when local variable name and global variable is same then global variable never use in local
block so if we want to access global variable in local then we can use scope with global
variable.

*/

int no=100;
int main()
{
    int no = 200;
    cout<<"\nLocal variable is "<<no<<"\n";
    cout<<"\nGlobal Variable is "<<no<<"\n";

    return 0;
}
/*
Output:

Local variable is 200
Global Variable is 200

Note: if we think about above code we have output is Local variable is 200 and Global Variable is 200
but the value of global variable is 100 but in above code we have same name global variable and same name 
local variable in this case local variable never allow global variable in his block so if we want to solve 
this problem use:: (scope operator with variable) means when we use scope with variable then variable mark 
as global variable in local block where local variable name is same 


*/