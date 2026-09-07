#include <iostream>
using namespace std;
int main(){
    int n=4;
    //cin>>n;
    int i=0;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<"*";
            
            j++;
        }
        cout<<endl;
        i++;
    }
}
