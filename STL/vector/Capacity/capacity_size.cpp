#include<iostream>
 //#include<bits/stdc++.h> -> it includes  all STL containers and functions.
 /*1.vector::size()-> size function is used to return the number of elements in the vector container.
            Syntax :   vectorname.size()
                         1) parameters : No parameters are passed.
                         2) Returns : Number of elements in the container.
                Examples : 
                         Input : myvector{1,2,3,4,5};
                                 myvector.size();
                         Output: 5

                         Input : myvector{};
                                 myvector.size();
                         Output: 0
                Time Complexity : O(1)
                Q.Why is empty() prefered over size()
                -> empty() function does not use any comparison operators,thus it is more convenient to use.
                -> empty() function is implemented in constant time, regardless of container type, whereas some implementations of size() function require
                   O(n) time complexity such as list::size().
                   */
 #include<vector>
 using namespace std;

 int main()
 {
    vector<int>v1{1,2,3,4,5};
    cout<<v1.size();
    int sum =0;
    while(v1.size() > 0)//inline std::size_t std::vector<int>::size() const noexcept
                        // Returns the number of elements in the %vector.
    {
         sum = sum + v1.back(); /*
                                inline int &std::vector<int>::back() noexcept
                                Returns a read/write reference to the data at the last
                                element of the %vector.
                                */
         v1.pop_back();/*
                        inline void std::vector<int>::pop_back() noexcept : 
                         Removes last element. This is a typical stack operation.
                         It shrinks the %vector by one. Note that no data is returned, and if the last element's data is needed, 
                         it should be retrieved before pop_back() is called.
                        */
    }
    cout<<endl<<sum<<endl;
    
    // We required to be careful while using size().
     vector<string>s1{"Vector","For","STL"};
     for(int i=0; i<=s1.size()-1;i++)
     {
        cout<<s1[i]<<" ";
     }
     cout<<endl;
     // above pgm works fine but now let us consider the following program :
     vector<string>s2={"This","is","Programming"};
     s2.clear();
     for(int i=0; i<= (int)s2.size()-1; i++)
     {
        cout<<s2[i]<<" ";
     }
     cout<<endl;
     cout<<"This Programming";
     /*
     By compiling the above program, we get Segmentation Fault (SIGSEGV) because the return type of size() is size_t
      which is an alias for unsigned long int.-> unsigned long int var = 0;-> cout << var – 1; 
     // This will be equal to 18446744073709551615-> vector<data_type> vec;-> cout << vec.size() – 1; 
     // This will also be equal to 18446744073709551615
     so we are looping from i = 0 to i = 18446744073709551615 in the above program

    Now consider the scenario where we are deleting elements from our initialized container and after a sequence of operations our container
     becomes empty and lastly, we are printing contents of our container using the above method. Definitely, it will lead to Segmentation Fault (SIGSEGV).

    How to fix it?
    It is advisable to typecast container.size() to integer type in order to avoid Segmentation Fault (SIGSEGV).
     */
     return 0;
 }