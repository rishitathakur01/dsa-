#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
int arr[6]={1,4,5,6,7,3};
int odd[5]={12,4,3,2,3};

reverse (arr,6);
 reverse(odd,5);

printArray(arr,6);
printArray(odd,5);


    return 0;
}