#include <iostream>
using namespace std;
int main(){
//to get out of infinite loop
    while(int i=1){
        
        switch(i){
            case 1:cout<<"hello";
            break;
            case 2:cout<<"bye";
            break;
        }
        exit(0);
    }

    return 0;
}