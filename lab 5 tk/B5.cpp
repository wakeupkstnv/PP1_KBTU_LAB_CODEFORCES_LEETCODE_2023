#include <bits/stdc++.h>
using namespace std;

int main() {
    string word; cin >> word;
    char helper = 'Z' - 'z';

    for (int i = 0; i < word.length(); i++) {
        char letter = word[i];
        if (letter >= 'a' and letter <= 'z') {
            cout << char(letter + helper);
            continue;
        }
        cout << char(letter);

    }
}