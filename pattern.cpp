#include <iostream>
using namespace std;
int main(){
    // int n=4;

    // int i=1;
    // while(i<=n){
        
    //     int j=1;
    //     while(j<=n){
    //         cout<<"*";
    //         j=j+1;

    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    int n;
    cin>>n;
    cout<<"the value of n is: "<<n<<endl;

    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<i;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;

// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<j;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }


// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<n-j+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }


int i=1;
int count=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<count<<" ";
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
    return 0;
}