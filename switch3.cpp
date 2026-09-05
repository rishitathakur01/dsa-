#include <iostream>
using namespace std;
int main(){

    int num=2;
    char ch='1';
    cout<<endl;
    switch(ch){
        case 1:cout<<"first";
        break;
        case '1':switch(num){
            case 1:cout<<"1st";
            break;
            case 2:cout<<"2nd";
            break;
        }
        break;
        default:cout<<"hello";
    }

    return 0;
}