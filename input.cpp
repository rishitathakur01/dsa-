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