#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;

    if (a <= b) {
        int n = 0;
        while (a * pow(2, n) != b) {
            if (pow(2, n) > b) {
                cout << "No";
                return 0;
            }
            n++;
        }
        cout << "Yes " << n;
    }
    else {
        int n = 0;
        while (a * pow(2, n) != b) {
            if (pow(pow(2, n), -1) > a) {
                cout << "No";
                return 0;
            }
            n--;
        }
        cout << "Yes " << n;
    }
}