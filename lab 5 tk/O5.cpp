#include <bits/stdc++.h>
using namespace std;

int main() {
    string word; cin >> word;
    char letter = '-1';

    for (int i = 0; i < word.length(); i++) {
        if (letter < word[i]) {
            letter = word[i];
        }
    }
    cout << letter;
}
