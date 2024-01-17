#include <bits/stdc++.h>
using namespace std;

int pos(int number) {
    if (number > 0) {
        return number;
    }
    return 0 - number;
}

int main() {
    int number; cin >> number;
    cout << pos(number);
}