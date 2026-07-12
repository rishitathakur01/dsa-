#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << "Sum = " << x + y << endl;

    long a = 39999;
    long long b = 909090909;
    float c = 6.78;
    double d = 82.92382093209;
    long double e = 12345567890;

    string f;

    cout << "Enter one word: ";
    cin >> f;
    cout << "Word = " << f << endl;

    cin.ignore();

    cout << "Enter full line: ";
    getline(cin, f);
    cout << "Line = " << f << endl;

    char ch = 'h';
    cout << "ch = " << ch << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main(){

cout<<"hello world"<<endl;
 int a =23;
 cout<<a<<endl;
 // int 23=344 variable cnnot start with number
 //int a=67; // cannot have same namew
 char c='a';//can only store char in single comma  also we cannot store two charecters at once in char
 cout<<c<<endl;

 bool b1=true;
 cout<<b1<<endl;

 float f=1.23;
 cout<<f<<endl;

double d=1.23345;
cout<<d<<endl;

int b=sizeof(d);
cout<<"the size of this aboove float variable is "<<b<<endl;

 return 0;

}
