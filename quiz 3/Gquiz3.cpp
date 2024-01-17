#include <bits/stdc++.h>
using namespace std;

int main(){
    string word; getline(cin, word);
    int n; cin >> n; vector <char> letters;

    for (int i = 0; i < n; i++){
        char let; cin >> let;
        letters.push_back(let);
    }
    sort(letters.begin(), letters.end());

    for (auto now: letters){
        int value = 0;
        for (int i = 0; i < word.length(); i++){
            if (word[i] == now){
                value++;
            }
        }
        cout << now << " - " << value << '\n';
    }
}