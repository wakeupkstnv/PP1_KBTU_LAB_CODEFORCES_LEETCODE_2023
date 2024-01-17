#include <bits/stdc++.h>
using namespace std;

void removeVowels(string word) {
    string NewWord = "";

    for (auto now : word) {
        if
            (now == 'A' || now == 'a'
                || now == 'E' || now == 'e'
                || now == 'I' || now == 'i'
                || now == 'O' || now == 'o'
                || now == 'U' || now == 'u'
                ) {
            continue;
        }
        NewWord += now;
    }

    cout << NewWord;
}

int main() {
    string word; getline(cin, word);
    removeVowels(word);
}