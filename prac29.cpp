#include <iostream>
#include <math.h>;
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        count=(bit*pow(10,i))+count;
       n= n>>1;
       i++;
    }
    cout<<count;
    return 0;
}