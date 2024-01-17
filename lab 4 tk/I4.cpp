#include <bits/stdc++.h>
using namespace std;

int main(){
    long column, size; cin >> column >> size;
    int array[column][size];

    for (int i = 0; i < column; i++){
        for (int j = 0; j < size; j++){
            float number; cin >> number;

            if (sqrt(number) - int(sqrt(number)) == 0){
                array[i][j] = sqrt(number);
                continue;
            }
            array[i][j] = number;

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