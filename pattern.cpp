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
int i=1;

while(i<=n){
     
    int j =1;
    char count='A'+n-i ;
   
    while(j<=i){
    
    cout<<count;
    count++;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
} 
////////////////////////////
    int i=1;
while(i<=n){

    int space=n - i;

    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
    while(j<=i){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
 int i=1;
while(i<=n){
    int j=1;
    while(j<=n-i+1){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
int i=1;
while(i<=n){
    int space=i-1;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
    while(j<=n-i+1){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
    // int i=1;
// while(i<=n){
//     int space=i-1;
//     while(space){
//         cout<<" ";
//         space=space-1;
//     }
//     int j=1;
//     while(j<=n-i+1){
//         cout<<i;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

    
int i=1;
while(i<=n){
    int space=i-1;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=i;
    while(j<=n){
        cout<<j;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
    int i=1;
while(i<=n){
    int space=n-i;
    while(space){
        cout<<" ";
        space=space-1;
    }
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
   
   
    int space=n-i;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
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
    //print kro space
    int space=n-i;
    while (space){
        cout<<" ";
        space--;
    }
    //print 1st triange
    int j=1;{
        while(j<=i){
            cout<<j;
            j=j+1;
        }

    }
    //print second triangle
    int start=i-1;
    while(start){
        cout<<start;
        start=start-1;

    }
    cout<<endl;
    i=i+1;

}

1234554321
1234*4321
123***321
12*****21
1*******1
int i=1;
while(i<=n){
    //first triangle
    int j=1;
    while(j<=n-i+1){
        cout<<j;
        j=j+1;
    }
//2nd trainge
    int star=1;
    while(star<=i-1){
        cout<<"*";
        star=star+1;
    }
//3rd triangle 
    int star2=1;
    while(star2<=i-2){
        cout<<"*";
        star2=star2+1;
    }

    //4rth triangle

    int k=j-1;
    while(k){
        cout<<k;
        k=k-1;
    }
    cout<<endl;
    i=i+1;
}

    return 0;
}
