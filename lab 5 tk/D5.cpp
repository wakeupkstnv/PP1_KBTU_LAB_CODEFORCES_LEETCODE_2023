#include <bits/stdc++.h>
using namespace std;

int main() {
    string word, drow = ""; cin >> word;

    for (int i = word.length() - 1; i >= 0; i--) {
        drow += word[i];
    }

    if (word == drow) { cout << "YES"; return 0; }
    cout << "NO";
}