#include <bits/stdc++.h>
using namespace std;

int main(){
    char letter; cin >> letter;
    string word; cin >> word;

    for (auto now: word){
        if (now == letter){
            continue;
        }
        cout << now;
    }

}