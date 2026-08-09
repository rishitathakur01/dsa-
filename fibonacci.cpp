#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"the value of n is "<<n <<endl;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next; 
        
    }
    return 0;
}