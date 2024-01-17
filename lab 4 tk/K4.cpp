#include <bits/stdc++.h>
using namespace std;

int main(){
    long column, size; cin >> column >> size;
    int array[column][size];

    for (int i = 0; i < column; i++){
        for (int j = 0; j < size; j++){
            cin >> array[i][j];

        }
    }

    for (int i = 0; i < column; i++){
        int sum = 0;
        for (int j = 0; j < size; j++){
            if (j == size - 1) {
                sum += array[i][j];
                cout << "The sum of row number " << i + 1 << " is " << sum << endl;
            }
            sum += array[i][j];
        }
    }

    for (int i = 0; i < size; i++){
        int sum = 0;
        for (int j = 0; j < column; j++){
            if (j == column - 1){
                sum += array[j][i];
                cout << "The sum of column number " << i + 1  << " is " << sum << endl;
            }
            sum += array[j][i];
        }
    }
}