#include<iostream>
using namespace std;

//Declaring a template class named Test.
template<class T> class Test
{
       private :
         // a variable (answer) of type T so that it can store results of various types2
         T answer;
        public :
        // constructor of Test class
         Test(T n) : answer(n)
         {
            cout<<"Inside Constructor"<<endl;
         }
         T getNumber()
         {
            return answer;
         }
};

//Main function
int main()
{
    // creating an object with an integer type:
    Test<int>T1(60);
    // creating an object with an double type:
    Test<double>T2(17.27);

  // calling the class method getNumber with differnt data types:
    cout<<"Integer number is "<<T1.getNumber()<<endl;
    cout<<"Double number is "<<T2.getNumber()<<endl;

    return 0;

}