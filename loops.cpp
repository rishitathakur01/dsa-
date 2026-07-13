#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;

// int i=1;

// while (i<=n){
//     cout<<i<<" ";
//     i=i+1;
// }
//  for(int i=1;i<=n;i++){
//     cout<<i<<endl;
//  }

// int i=1;
// int sum=0;

// while(i<=n){
    
//    sum = sum + i;
//    i=i+1;
// }
// cout<<sum;

// int i=2;
// int sum=0;
// while(i<=n){
//     sum=sum+i;
//     i=i+2;
// }
// cout<<sum;

int i=2;
while(i<n){

    if(n%i==0){
        cout<<"not prime "<<i<<endl;
    }
    else{
        cout<<"prime "<<i<<endl;
    }
    i=i+1;
}


return 0;

}