#include <bits/stdc++.h>
using namespace std;

char toHex(int num){
    if (num <= 15 and num >= 10){
        return 55 + num;
    }

    return num + '0';
}

int main(){
    int n; cin >> n;
    string answer = "";

    while (n != 0){
        answer += toHex(n % 16);
        n /= 16;
    }

    for (int i = answer.length() - 1; i >= 0; i--){
        cout << answer[i];
    }
}