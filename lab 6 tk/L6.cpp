#include <bits/stdc++.h>
using namespace std;

void find_number(string word, int number) {

    int count = 0;
    int max = -1;
    for (int i = 0; i < word.length(); i++) {
        if ('0' <= word[i] && word[i] <= '9') {
            count++;
        }
        else {
            if (count > max) {
                max = count;
                count = 0;
            }
            count = 0;
        }
    }
    if (max >= number) {
        cout << "Valid";
    }
    else {
        cout << "Not valid";
    }

}

int main() {
    string userWord; cin >> userWord;
    int value_of_number; cin >> value_of_number;
    find_number(userWord, value_of_number);
}