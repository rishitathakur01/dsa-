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
    / int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
    int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
    int i=1;
int count=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<count;
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
    // int row =1;

// while(row<=n){
//     int col=1;
//     int val=row;
//     while(col<=row){
//         cout<<val;
//         val=val+1;
//         col=col+1;

//     }
//     cout<<endl;
//     row=row+1;
// }

    // or

// int row =1;

// while(row<=n){
//     int col=1;
    
//     while(col<=row){
//         cout<<row+col-1;
        
//         col=col+1;

//     }
//     cout<<endl;
//     row=row+1;
// }

    int i =1;

while(i<=n){
    int j=1;
    
    while(j<=i){
        cout<<i-j+1;
        
        j=j+1;

    }
    cout<<endl;
    i=i+1;
}
    int i=1;
while(i<=n){
    int j =1;
   
    while(j<=n){
        char ch='A'+i-1;
        cout<<ch  ;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
int i=1;
while(i<=n){
    int j =1;
   
    while(j<=n){
        char ch='A'+j-1;
        cout<<ch  ;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
 int i=1;
 char start='A';
while(i<=n){
    int j =1;
   
    while(j<=n){
       
         cout<<start;
        start=start+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
int i=1;
 
while(i<=n){
     
    int j =1;
   
    while(j<=n){
    
    
    char ch='A'+i+j-2;
    cout<<ch;
    
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
int i=1;
 
while(i<=n){
     
    int j =1;
   
    while(j<=i){
    
    
    char ch='A'+i-1;
    cout<<ch;
    
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

    int i=1;
char count='A' ;
while(i<=n){
     
    int j =1;
   
    while(j<=i){
    
    cout<<count;
    count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

int i=1;

while(i<=n){
     
    int j =1;
    char count='A'+i+j-2 ;
   
    while(j<=i){
    
    cout<<count;
    count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
    
    return 0;
}
