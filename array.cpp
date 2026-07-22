//ARRAY->a set of similar datatypes
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
