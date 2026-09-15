#include <iostream>
using namespace std;
int ap(int n){
    int apf=(3*n+7);
    return apf;
}
int main(){
    int n;
    cin>>n;
    int a=ap(n);
    cout<<a;

    return 0;
}