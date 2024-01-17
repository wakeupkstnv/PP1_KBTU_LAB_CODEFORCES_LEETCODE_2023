#include <bits/stdc++.h>
using namespace std;

void check_valid(string number) {
    bool check = true;

    for (auto now : number) {
        if ((now - '0') % 2 == 1) {
            check = false;
        }
    }

    if (check) {
        cout << "Valid";
    }
    else {
        cout << "Not valid";
    }
}

int main() {
    string word; cin >> word;
    check_valid(word);
}