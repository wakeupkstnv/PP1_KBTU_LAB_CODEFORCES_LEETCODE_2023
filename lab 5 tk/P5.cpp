#include <bits/stdc++.h>
using namespace std;

int main() {
    string word; cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'z') {
            word[i] = 'a';
            continue;
        }
        word[i]++;

    }
    cout << word;
}