#include <bits/stdc++.h>
using namespace std;


int main() {
    int number; cin >> number;
    int array[2][number];
    int answerArray[number];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < number; j++) {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < number; i++) {
        answerArray[i] = abs(array[1][i] - array[0][i]);
    }

    for (auto now : answerArray) {
        cout << now << " ";
    }
}