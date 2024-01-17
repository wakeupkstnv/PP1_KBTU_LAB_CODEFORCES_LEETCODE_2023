#include <bits/stdc++.h>
using namespace std;

int main(){
    long column, size, n = 0; cin >> column >> size;
    int array[column][size];

    for (int i = 0; i < column; i++){
        for (int j = 0; j < size; j++){
            int number; cin >> number;

            if (n % 2 == 0) {
                array[i][j] = number + 1;
                n++; continue;
            }
            n++; array[i][j] = number - 1;
        }
        if (i % 2 == 0) {
            n = 1;
        } else{
            n = 0;
        }
    }

    for (int i = 0; i < column; i++){
        for (int j = 0; j < size; j++){
            if (j == size - 1){
                cout << array[i][j] << endl;
                continue;
            }
            cout << array[i][j] << " ";

        }
    }
}