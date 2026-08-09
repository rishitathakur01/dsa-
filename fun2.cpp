#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"the value of n is "<<n <<endl;
    int i=1;
    for(; ; ){//for does not know when to stop therfore infinite loop
        if(i<=n){
            cout<<i<<endl;
        }
     else{
        break;//current loop se bahr 
        
     }
         
        i++;
    }
    return 0;
}