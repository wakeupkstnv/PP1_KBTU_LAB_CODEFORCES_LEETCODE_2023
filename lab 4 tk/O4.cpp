#include <bits/stdc++.h>
using namespace std;

int main(){
    int square, x = 0, y = 0; cin >> square;
    int array[square][square]; cin >> array[0][0];
    int max = array[0][0];

    for (int i = 0; i < square; i++){
        for (int j = 0; j < square; j++){
            if (i == 0 && j == 0) continue;
            cin >> array[i][j];
            if (i == j) {
                if (array[i][j] > max) {
                    max = array[i][j];
                    x = i;
                    y = j;
                }
            }
        }
    }

    cout << "Maximum element is: " << max << " with coordinates: " << x + 1 << ";" << y + 1;
}