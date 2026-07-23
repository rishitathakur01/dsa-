//ARRAY->a set of similar datatypes
// An array is a collection of elements of the same data type stored in contiguous memory locations.
// Each element is accessed using an index.
// In C++, array indexing starts from 0.
// Arrays have a fixed size that is specified when they are declared.
// Elements can be accessed, updated, and traversed efficiently using loops.
// Arrays provide constant-time (O(1)) access to an element using its index.
// They are useful for storing multiple values under a single variable name.
// Arrays can be one-dimensional (1D) or multi-dimensional (2D, 3D, etc.).
// Accessing an index outside the array's bounds results in undefined behavior in C++.
// Arrays are commonly used in algorithms for searching, sorting, and data processing.
#include <iostream>
using namespace std;
//if we know that entire data is of similar datatypes them we can use array
// can change  value
// can add or substact values
//1->0,2->1....
//in memory we are nit sure about 0 but after that its stored consecutively one after the other

int main(){

/*    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    arr[3]+=10;
    cout<<arr[3];*/

//2D ARRAY
// i=row j=column
// value not assigned we get garbage value 
int arr[3][5];
arr[0][3]=67;
cout<<arr[0][3];

    return 0;
}
