#include <bits/stdc++.h>
using namespace std;

int main() {
    string word; char letter; int number, count = 0;
    cin >> word >> letter >> number;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == letter) count++;
    }
    if (count == number) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
}
