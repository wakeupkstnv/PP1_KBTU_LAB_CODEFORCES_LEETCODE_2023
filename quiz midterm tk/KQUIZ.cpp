#include <bits/stdc++.h>
using namespace std;

int main() {
    int num; cin >> num;
    int array_1[num], array_2[num];

    for (int i = 0; i < num; i++) {
        cin >> array_1[i];
    }

    for (int i = 0; i < num; i++) {
        cin >> array_2[i];
    }

    int target; cin >> target;
    int count = 0;
    int index = 0;
    for (; index < num; ) {
        for (; index < num; ) {
            if ((array_1[index] > target and array_2[index] < target) or array_1[index] < target and array_2[index] > target) {
                count++;
            }
            index++;
        }
    }
    cout << count;
}