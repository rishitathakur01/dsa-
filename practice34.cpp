#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    if(n<2){
        cout<<"not a prime";
    }
    else{
        while(i<n){
    if(n%i==0){
        cout<<"not a prime number";
        return 0;
}

i++;
    }
cout<<"prime" ;
}
    return 0;
}