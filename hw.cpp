#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"the value of n is"<<n<<endl;
    
    int rs100,rs50,rs20,rs1;

    switch(1){
        case 1:rs100=n/100;
        n=n%100;
        cout<<"number of rs 100 note "<<rs100<<endl;

        
        
        case 2:
        rs50=n/50;
        n=n%50;
        cout<<"number of rs 50 note "<<rs50<<endl;
        
        

        case 3:
        rs20=n/20;
        n=n%20;
        cout<<" number of rs 20 note "<<rs20<<endl;
        
        

        case 4:
        rs1=n/1;
        n=n%1;
        cout<<"number of rs 1 note "<<rs1<<endl;
        
        

    }



    return 0;
}                                                                                                                                                                                                  