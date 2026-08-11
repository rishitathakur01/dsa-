#include <iostream>
using namespace std;
int main(){
int a=3;
    cout<<a<<endl;

    if(true){
      int b=5 ; 
      cout<<b<<endl;
    }
    //cout<<b;
    //will show an error because b is intialized inside and 
            //cannot be accessed outside the block
    return 0;
}