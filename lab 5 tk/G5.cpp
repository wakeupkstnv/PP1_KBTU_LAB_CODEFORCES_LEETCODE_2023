#include <bits/stdc++.h>
using namespace std;

int main() {
    string word, second_word; cin >> word >> second_word;
    int count = 0;
    int j = 0;
    if (word.length() == second_word.length()) {
        for (int i = 0; i < word.length(); i++) {
            for (j; j < second_word.length(); j++) {
                if (word[i] == second_word[j]) {
                    count++;
                    j++;
                    break;
                }
            }
        }

        if (count == word.length()) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else {
        cout << "NO";
    }

}