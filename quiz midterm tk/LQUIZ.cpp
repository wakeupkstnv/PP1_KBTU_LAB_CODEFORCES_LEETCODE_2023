#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ,k; cin >> n >> k;
    int array[n][k];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> array[i][j];
        }
    }

    int target; cin >> target;

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (array[i][j] > target){
                cout << "Penalty!";
                return 0;
            }
        }
    }
    cout << "Not penalty today!";
}