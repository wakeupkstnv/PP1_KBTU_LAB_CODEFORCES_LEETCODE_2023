#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int array[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> array[i][j];
        }
    }

    n--;
    int x = n, y = 0;
    for (int i = 0; i < n; i++){
        if (array[x][y] != array[y][x]){
            cout << "Not Perfect";
            return 0;
        }
        y++; x--;
    }
    cout << "Perfect";
}