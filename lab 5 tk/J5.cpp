#include <bits/stdc++.h>
using namespace std;

int main() {
    string word; cin >> word;

    for (int i = 0; i < word.length(); i++) {
        string secondword = word, drow = "";
        secondword += word[i];

        for (int i = secondword.length() - 1; i >= 0; i--) {
            drow += secondword[i];
        }
        if (secondword == drow) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}