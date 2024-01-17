#include <bits/stdc++.h>
using namespace std;

int main() {
    string number_string; cin >> number_string;
    int odd = 0, even = 0;

    for (int i = 0; i < number_string.length(); i++) {
        if (i % 2 == 0) even += number_string[i] - 48;
        else { odd += number_string[i] - 48; }
    }

    if (odd == even) { cout << "YES"; return 0; }
    cout << "NO";
}