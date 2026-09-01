#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "-";
        n = -n;
    }

    int ans = 0;
    int digit = 1;

    while (n != 0) {
        int bit = n & 1;
        ans = bit * digit+ ans;

        n = n >> 1;
        digit= digit * 10;
    }

    cout << ans;

    return 0;
}