#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prod=1;
    int sum=0;
              
    cout<<n<<endl;

    while(n!=0){

        int rem = n%10;
        prod=prod*rem;
        sum=sum+rem;

        n=n/10;
    }
    int ans = prod-sum;
    cout<<ans;

    return 0;
}