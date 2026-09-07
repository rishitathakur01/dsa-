#include <iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int star=1;
        while(star<=n-j+1){
            cout<<"*";
            star++;
        }
        int star2=1;
        while(star2<=i-2){
            cout<<"*";
            star2++;
        }
        int k=j-1;
        while(k){
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;

    }
}