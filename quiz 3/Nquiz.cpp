#include <bits/stdc++.h>
using namespace std;

int main(){
    string word, answer = ""; cin >> word;

    for (int i = 0; i < word.size(); i++){
        if (word[i] >= 'a' && word[i] <= 'z' || word[i] >= 'A' && word[i] <= 'Z'){
            answer += word[i];
        }
    }

    cout << answer;
}