#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"the value of n is "<<n <<endl;

bool isPrime=1;

    for(int i=2;i<n;i++){
        if(n%i==0){
            //cout<<"not a prime numbeer";
            isPrime=0;
            break;
        }
        // else{//remainder is not 0 may be prime
            
        // }no need
        
    }
    if(isPrime==0){
        cout<<"not a prime number";
    }
    else{
        cout<<"is a prime number";
    }
    return 0;
}