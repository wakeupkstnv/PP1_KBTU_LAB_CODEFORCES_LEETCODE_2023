#include <bits/stdc++.h>

using namespace std;
//BEKA КРАШ
int main(){
    int n; cin >> n;
    int array[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        int max = INT_MIN;
        for (int j = 0; j < n; j++){
            if (max < array[i][j]){
                max = array[i][j];
            }
        }
        for (int j = 0; j < n; j++){
            array[i][j] = max;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}