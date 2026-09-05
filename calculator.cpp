#include <iostream>
using namespace std;
int main(){

    int a,b;
    cin>>a;
    cin>>b;
    
    char op;
    cin>>op;
    cout<<"operation "<<op<<endl;

    switch (op){
        case '+' :cout<<a+b;
            break;

        case '-' :cout<<a-b;
            break;

        case '*' :cout<<a*b;
            break;

        case '%' :cout<<a%b;
            break;

        case '/' :cout<<a/b;
            break;

        default :cout<<"enter a valid operation";
    }

    return 0;
}