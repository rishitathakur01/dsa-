#include <iostream>
using namespace std;
bool evenorodd(){
    int a;
    cin>>a;
    if(a%2==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int a=evenorodd();
    cout<<a<<endl;

int b=evenorodd();
    cout<<b<<endl;

    int c=evenorodd();
    cout<<c<<endl;

    return 0;
}