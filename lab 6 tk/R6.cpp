#include <bits/stdc++.h>
using namespace std;

char uppercase(char let) {
    if (let <= 'Z' && let >= 'A') {
        return let;
    }
    return let + ('A' - 'a');
}
int main() {
    char letter; cin >> letter;
    cout << uppercase(letter);
}