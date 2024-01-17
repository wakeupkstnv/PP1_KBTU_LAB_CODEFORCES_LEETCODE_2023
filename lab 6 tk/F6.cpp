#include <bits/stdc++.h>
using namespace std;

void find_number(string word, int number) {

    int count = 0;

    for (int i = 0; i < word.length(); i++) {
        if ('0' <= word[i] && word[i] <= '9') {
            count++;
        }
    }

    if (count >= number) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

}

int main() {
    string userWord; cin >> userWord;
    int value_of_number; cin >> value_of_number;

    find_number(userWord, value_of_number);
}