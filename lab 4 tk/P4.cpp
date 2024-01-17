#include <bits/stdc++.h>
using namespace std;

int main(){
    int square; cin >> square;
    int array[square][square];
    int sum = 0;

    for (int i = 0; i < square; i++){
        for (int j = 0; j < square; j++){
            cin >> array[i][j];
            if (i + j == square - 1) {
                    sum += array[i][j];
                }
            }
        }


    cout << sum;
}