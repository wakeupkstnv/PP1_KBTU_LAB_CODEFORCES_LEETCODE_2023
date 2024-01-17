#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, answer = 1; cin >> n >> k;
    int array[n][k];
    int min = 0;

    for (int i = 0; i < k; i++){
        cin >> array[0][i];
        min += array[0][i];
    }
    int tMin = 0;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < k; j++){
            cin >> array[i][j];
            tMin += array[i][j];
        }

        if(min > tMin){
            min = tMin;
            tMin = 0;
            answer = i + 1;
            continue;
        }

        tMin = 0;

    }

    cout << answer;

}