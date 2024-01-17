#include <bits/stdc++.h>
using namespace std;

int main(){
    string word, answer = ""; cin >> word;

    for (int i = 0; i < word.size(); i++){
        if (word[i] >= 'a' and word[i] <= 'z'){
            answer += word[i];
        }
    }

    cout << answer;
}