#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(string dig) {
    int sum = 0;

    for (auto now : dig) {
        sum += now - '0';
    }

    return sum;
}

int main() {
    string digits; cin >> digits;
    cout << sum_of_digits(digits);
}