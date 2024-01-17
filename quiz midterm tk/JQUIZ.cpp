#include <bits/stdc++.h>
using namespace std;

int main() {
    string n; cin >> n;
    int number = n.length();
    int array[number];
    int real_n = stoi(n), index = 0;

    while (real_n != 0) {
        array[index] = real_n % 10;
        real_n /= 10;
        index++;
    }

    int max = INT_MIN;
    for (int i = 0; i < number; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    int min = INT_MAX;
    for (int i = 0; i < number; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    cout << max << " " << min;
}