#include <bits/stdc++.h>
using namespace std;

int percent_top(int a, int b){
    return a / b;
}

int main(){
    string word, subword; cin >> word >> subword;
    char rep; cin >> rep;

    for (int i = 0; i < subword.size(); i++){
        for (int j = 0; j < word.size(); j++){
            if (subword[i] == word[j]){
                word[j] = rep;
            }
        }
    }

    cout << word;
}