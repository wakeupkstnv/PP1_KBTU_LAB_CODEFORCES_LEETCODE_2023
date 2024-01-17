#include <bits/stdc++.h>
using namespace std;

void islucky(string digits) {
    int sum;
    for (auto now : digits) {
        sum += now - '0';
    }

    int lastDigit = digits[digits.length() - 1] - '0';
    if (sum % lastDigit == 0) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}

int main() {
    string ticket; cin >> ticket;
    islucky(ticket);
}