#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    string word; cin >> word;

    for (auto now: word){
        if (now >= '0' and now <= '9'){
            sum += now - '0';
        }
    }

    cout << sum;
}