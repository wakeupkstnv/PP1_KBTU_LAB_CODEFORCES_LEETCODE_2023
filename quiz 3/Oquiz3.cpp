#include <bits/stdc++.h>
using namespace std;

int main(){
    string word; cin >> word;
    int max = INT_MIN;
    char check = word[0];  


    for (int i = 0; i < word.size(); i++){
        int count = 1;
        for (int j = i + 1; j < word.size(); j++){
            if (word[j] != word[i] or j == word.size() - 1){
                if (word[j] == word[i]) count++;

                if (max < count){
                    check = word[j - 1];
                    max = count;
                }
                break;
            }
            count++;
        }
    }

    if (max == 1){
        cout << word[0] << " " << 1;
    }
    else{
        cout << check << " " << max;
    }
}