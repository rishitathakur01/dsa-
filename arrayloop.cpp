#include <iostream>
using namespace std;
int main(){
    int array[15]={1,2};
    //int n=3;
    int n=15;
    for(int i=0;i<n;i++){
        cout<<array[i];
       \
    }
cout<<endl;

//initializing all with 0
     int array1[10]={0};
    //int n=3;
    int a=7;
    for(int i=0;i<a;i++){
        cout<<array1[i];
    }


    cout<<endl;


    //initializing everything with 1 is not possible this way
     int array2[15]={1};
    //int n=3;
    int b=15;
    for(int i=0;i<b;i++){
        cout<<array2[i];
    }
cout<<endl;

 int array3[15];

fill(array3, array3 + 15, 1);

for(int i = 0; i < 15; i++){
    cout << array3[i] ;
}
    return 0;
}

