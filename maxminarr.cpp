//need to be  revisited 
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// NEW METHOD using max()
int getMax(int num[], int n) {
    int maximum = INT_MIN;

    for (int i = 0; i < n; i++) {
        maximum = max(maximum, num[i]);
    }

    return maximum;
}

// OLD METHOD using if
/*
int getMax(int num[], int n) {
    int max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    return max;
}
*/

// NEW METHOD using min()
int getMin(int num[], int n) {
    int minimum = INT_MAX;

    for (int i = 0; i < n; i++) {
        minimum = min(minimum, num[i]);
    }

    return minimum;
}

// OLD METHOD using if
/*
int getMin(int num[], int n) {
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }

    return min;
}
*/

int main() {
    int size;
    cin >> size;

    int num[100];

    // taking input in array
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Max value is " << getMax(num, size) << endl;
    cout << "Min value is " << getMin(num, size) << endl;

    return 0;
}