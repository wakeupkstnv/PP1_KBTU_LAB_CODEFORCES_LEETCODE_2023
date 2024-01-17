#include <bits/stdc++.h>
using namespace std;

int main() {
    string word, secondWord; cin >> word >> secondWord;
    int sum1 = 0, sum2 = 0;

    if (word.length() != secondWord.length()) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < word.length(); i++) {
        sum1 += word[i];
        sum2 += secondWord[i];
    }

    if (sum1 == sum2) {
        cout << "YES";
        return 0;
    }

    cout << "NO";

}