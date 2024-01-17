#include <bits/stdc++.h>

using namespace std;
//BEKA ÊÐÀØ
int main() {
    int n; cin >> n;
    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int max_1 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (max_1 < array[i]) {
            max_1 = array[i];
        }
    }


    int max_2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (array[i] > max_2 && array[i] != max_1) {
            max_2 = array[i];
        }
    }

    cout << max_1 * max_2;
}