#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k = 1; cin >> n;
    set <int> s;

    for (int i = 0; i < n * n; i++){
        int number; cin >> number;
        s.insert(number);
    }
    if(s.size() == 1){
        cout << 0;
        return 0;
    }

    for (auto now : s){
        if (k == s.size() - 1){
            cout << now;
        }
        k++;
    }

}