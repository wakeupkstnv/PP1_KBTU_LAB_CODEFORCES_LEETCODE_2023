#include <bits/stdc++.h>
using namespace std;

int main() {
    string word; cin >> word;
    int n, k; cin >> n >> k;

    for (int i = n; n <= k; n++) {
        cout << word[n];
    }
}