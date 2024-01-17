#include <bits/stdc++.h>
using namespace std;

int main() {
    string word; cin >> word;
    int big = 0, little = 0;
    for (int i = 0; i < word.length(); i++) {
        char letter = word[i];
        if (letter >= 65 and letter <= 90) { big++; }
        if (letter >= 91 and letter <= 122) { little++; }
    }

    cout << little << " " << big;
}