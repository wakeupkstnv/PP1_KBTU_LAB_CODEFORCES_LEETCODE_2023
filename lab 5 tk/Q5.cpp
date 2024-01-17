#include <bits/stdc++.h>
using namespace std;

int main() {
    string word_to_search, word; cin >> word_to_search >> word;
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < word_to_search.length(); i++) {
        sum1 += word_to_search[i];
    }
    for (int i = 0; i < word.length(); i++) {
        sum2 += word[i];
    }

    if (sum2 % sum1 == 0) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
}
