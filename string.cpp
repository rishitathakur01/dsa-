//STRING
//every charecter is stired at an index 

#include <iostream>
using namespace std;
int main(){
    string s="Rishita";
    //cout<<s[1];

    int len = s.size();
    s[len-1]='z';
    cout << s[len-1];
    return 0;

}