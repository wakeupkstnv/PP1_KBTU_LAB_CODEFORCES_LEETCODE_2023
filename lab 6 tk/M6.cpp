#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int num) {
    for (int i = num - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}
int main() {
    int number; cin >> number;
    int array[number];

    for (int i = 0; i < number; i++) {
        cin >> array[i];
    }

    reverseArray(array, number);
}