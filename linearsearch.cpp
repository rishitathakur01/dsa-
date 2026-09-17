#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
 int arr[10]={3,5,-6,-23,4,6,8,-9,1,-5};
 //whether 1 is present in it or not
 
    cout<<"enter the element you wanna search for"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }
 

    return 0;
}