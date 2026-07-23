// Types of Operators in C++
// Arithmetic Operators: +, -, *, /, %
// Relational (Comparison) Operators: ==, !=, >, <, >=, <=
// Logical Operators: &&, ||, !
// Assignment Operators: =, +=, -=, *=, /=, %=
// Increment/Decrement Operators: ++, --
// Bitwise Operators: &, |, ^, ~, <<, >>
// Conditional (Ternary) Operator: ?:

#include <iostream>
using namespace std;
int main(){
int a=4;
int b=6;
cout<< "a&b "<<(a&b) <<endl;
cout<<"a\b "<<(a|b)<<endl;
cout<<"~a "<<(~a)<<endl;
cout<<"a^b "<<(a^b)<<endl;


cout<<(17>>1)<<endl;
cout<<(17>>2)<<endl;
cout<<(19<<1)<<endl;
cout<<(21<<2)<<endl;
cout<<(-21<<2)<<endl;

int i=7;
cout<<(++i)<<endl;//8
cout<<(i++)<<endl;//8   9
cout<<(--i)<<endl;//8
cout<<(i--)<<endl;//8
    return 0;
}
