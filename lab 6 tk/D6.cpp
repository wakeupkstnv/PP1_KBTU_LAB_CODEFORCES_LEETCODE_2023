#include <bits/stdc++.h>
using namespace std;

void have_a_number(int array[], int size, int number) {
    bool check = false;
    for (int i = 0; i < size; i++) {
        if (number == array[i]) {
            cout << "Yes";
            check = true;
            break;
        }
    }
    if (!check) {
        cout << "No";
    }
}

int main() {
    int size; cin >> size;
    int array[size];

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int number; cin >> number;

    have_a_number(array, size, number);
}