// #include<iostream>
// #include<iterator> // for iterators
// #include<vector> // for vectors
// using namespace std;
// int main()
// {
//     vector<int> ar = { 1, 2, 3, 4, 5 };
      
//     // Declaring iterator to a vector
//     vector<int>::iterator ptr;
      
//     // Displaying vector elements using begin() and end()
//     cout << "The vector elements are : ";
//     for (ptr = ar.begin(); ptr < ar.end(); ptr++)
//         cout << *ptr << " ";
      
//     return 0;    
// }

// #include<iostream>
// #include<iterator> // for iterators
// #include<vector> // for vectors
// using namespace std;
// int main()
// {
//     vector<int> ar = { 1, 2, 3, 4, 5 };
      
//     // Declaring iterators to a vector
//     vector<int>::iterator ptr = ar.begin();
//     vector<int>::iterator ftr = ar.end();
     
     
//     // Using next() to return new iterator
//     // points to 4
//     auto it = next(ptr, 3);
      
//     // Using prev() to return new iterator
//     // points to 3
//     auto it1 = prev(ftr, 3);
      
//     // Displaying iterator position
//     cout << "The position of new iterator using next() is : ";
//     cout << ar[*it] << " ";
//     cout << endl;
      
//     // Displaying iterator position
//     cout << "The position of new iterator using prev()  is : ";
//     cout << ar[*it1] << " ";
//     cout << endl;
      
//     return 0; 
// }

// C++ code to demonstrate the working of
// inserter()
#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;
int main()
{
    vector<int> ar = { 1, 2, 3, 4, 5 };
    vector<int> ar1 = {10, 20, 30}; 
      
    // Declaring iterator to a vector
    vector<int>::iterator ptr = ar.begin();
     
    // Using advance to set position
    advance(ptr, 3);
      
    // copying 1 vector elements in other using inserter()
    // inserts ar1 after 3rd position in ar
    copy(ar1.begin(), ar1.end(), inserter(ar,ptr));
      
    // Displaying new vector elements
    cout << "The new vector after inserting elements is : ";
    for (int &x : ar) 
        cout << x << " ";
    cout<<"\n";
    cout << "The new vector after inserting elements is : ";
for (int i = 0; i < ar.size(); ++i) {
    cout << ar[i] << " ";
}

      
    return 0;    
}