#include <iostream>
using namespace std;

//1=isprime
//0=not prime

bool isprime(int n){
for(int i=2;i<n;i++){
    if(n%i==0){
        //divide hogya hai means,not a prime number
        return 0;
    }
}
 return 1;
}

int main(){
    int n;
    cin>>n;

    if (isprime(n)){
        cout<<"is a prime no."<<endl;
    }
    else{
    cout<<"not a prime no";
    }
    return 0;
}