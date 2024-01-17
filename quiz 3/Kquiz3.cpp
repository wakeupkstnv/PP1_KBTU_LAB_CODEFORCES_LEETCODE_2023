#include <bits/stdc++.h>
using namespace std;

int main(){
    string digits; cin >> digits;
    int answer = 0;

    for (int i = digits.size() - 1; i >= 0; i--){
        answer += (digits[i] - '0') * pow(2, digits.size() - i - 1);
    }

    cout << answer;
}