#include <bits/stdc++.h>
using namespace std;

/*
KBTU ONE LOVE
*/

void solve(){
    //
}

int main(){
    vector <int> numbers;
    int n;

    while (cin >> n){
        if (n == 0) break;
        numbers.push_back(n);
    }

    int start = 0, last = numbers.size() - 1;

    do {
        cout << numbers[start] + numbers[last] << " ";
        start++; last--;
        if (last == start) cout << numbers[last];
        if (last - 1 == start) cout << numbers[last] + numbers[start];
    }
    while(last != start and last - 1 != start);
}