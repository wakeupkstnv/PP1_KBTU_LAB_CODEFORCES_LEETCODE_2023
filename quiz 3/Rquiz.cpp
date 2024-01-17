#include <bits/stdc++.h>
using namespace std;


int main(){
    string word; cin >> word;
    char letter; cin >> letter;
    vector <int> answer;

    for (int i = 0; i < word.length(); i++){
        if (word[i] == letter){
            answer.push_back(i);
            break;
        }
    }

    for (int i = word.length() - 1; i >= 0; i--){
        if (word[i] == letter){
            if (i == answer[0]){
                break;
            }
            else{
                answer.push_back(i);
                break;
            }
        }
    }

    for (auto now: answer){
        cout << now << " ";
    }
}