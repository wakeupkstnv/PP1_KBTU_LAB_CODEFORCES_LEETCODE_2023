#include <bits/stdc++.h>
using namespace std;

bool isBool(char n){
    return n - '0';
}

int main(){
    string word; cin >> word;
        char n = word[0];
        for (int i = 1; i < word.length(); i++){
            if (word[i] != n){
                cout << word;
                return 0;
            }
        }
        bool answer = isBool(word[0]);
        if (answer){
            cout << "true";
        }
        else{
            cout << "false";
        }
}
