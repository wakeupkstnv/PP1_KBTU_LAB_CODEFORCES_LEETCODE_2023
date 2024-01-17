#include <bits/stdc++.h>
using namespace std;

int main() {
    string word_first, word_second; cin >> word_first >> word_second;

    if (word_first.find(word_second) != -1) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
}