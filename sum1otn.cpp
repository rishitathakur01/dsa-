#include <iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    int sum=0;
    cout<<"the value of n is "<<n <<endl;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}