#include <bits/stdc++.h>
using namespace std;

int max_of_four(int array[]) {
    int max = array[0];
    for (int i = 1; i < 4; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int ms[4];
    for (int i = 0; i < 4; i++) {
        cin >> ms[i];
    }

    cout << max_of_four(ms);
}