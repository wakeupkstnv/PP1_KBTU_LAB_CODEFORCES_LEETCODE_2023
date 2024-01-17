#include <bits/stdc++.h>
using namespace std;

int main() {
    string word; cin >> word;
    int number = 0;

    for (int i = 0; i < word.length(); i++) {
        if (number <= word[i]) {
            number = word[i];
            continue;
        }
        cout << "NO";
        return 0;
    }
    cout << "YES";
}