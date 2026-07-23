//STRING
//every charecter is stired at an index 
// A string is a sequence of characters used to store and manipulate text.
// In C++, strings are represented using the string data type from the <string> library.
// Strings support various operations such as concatenation, comparison, accessing characters, and finding length.

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
