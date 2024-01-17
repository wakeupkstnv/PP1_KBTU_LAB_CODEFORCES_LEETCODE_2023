#include <bits/stdc++.h>
using namespace std;

int main(){
    string word; getline(cin, word);
    vector <string> words;
    string letters = "";

    for (int i = 0; i < word.length(); i++){

        if(word[i] == ' ' or i == word.length() - 1){

            if ((word[i] >= 'A' and word[i] <= 'Z') or (word[i] >= 'a' and word[i] <= 'z'))
                letters += word[i];

            words.push_back(letters);
            letters = "";
            continue;
        }

        letters += word[i];
    }

    vector <string> answer;

    for (auto now: words){
        bool check = true;
        for (int i = 0; i < now.size(); i++){
            if (now[i] >= '0' and now[i] <= '9'){
                check = false;
                break;
            }
        }
        if (check){
            answer.push_back(now);
        }
    }

    for (auto now: answer){
        cout << now << endl;
    }
}