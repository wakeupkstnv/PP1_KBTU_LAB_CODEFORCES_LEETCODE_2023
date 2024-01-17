#include <bits/stdc++.h>
using namespace std;

void even_uppercase(string word) {
    for (int i = 0; i < word.length(); i++) {
        if (i % 2 == 0 and word[i] >= 97 and word[i] <= 122) {
            word[i] = char(word[i] - 32);
        }
    }
    cout << word;
}

int main() {
    string word; cin >> word;
    even_uppercase(word);
}