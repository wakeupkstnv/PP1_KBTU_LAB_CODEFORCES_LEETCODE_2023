#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, count = 0; cin >> n >> k;
    long array[n][k];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            if(array[i][j] < 0) count++;
        }
    }

    cout << count;

    return 0;
}