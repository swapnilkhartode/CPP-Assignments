/*
# VArious functions in vectors are :
  1.vector::size()-> size function is used to return the number of elements in the vector container.
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
  2.max_size()->
  3.capacity()->
  4.resize(n)->
  5.empty()->
  6.shrink_to_fit()->
  7.reserve()->
  */
 