#include <iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"hello"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"done"<<endl;
}
int main(){
    int arr1[15]={2,3};
    printArray(arr1,15);

    int arr2[15]={6,7};
    printArray(arr2,15);
    int size=sizeof(arr2)/sizeof(int);
    cout<<"size of arr is  "<<size;
    return 0;
}