#include <bits/stdc++.h>
using namespace std;

int main(){
    long column, size, sum = 0, index_of_min = 0; cin >> column >> size;
    int array[column][size];

    for (int i = 0; i < column; i++){
        for (int j = 0; j < size; j++){
            cin >> array[i][j];

        }
    }
    cout << "coordinates of min elements: " << endl;

    int sum_array[size], number = 0;

    for (int i = 0; i < size; i++){
        int min, x, y;
        for (int j = 0; j < column; j++){
            if (j == 0) {min = array[j][i]; x = j; y = i; continue;}
            if (array[j][i] < min) {min = array[j][i]; x = j; y = i;}
        }
        sum_array[number] = min; number++;
        cout << x + 1 << ";" << y + 1 << endl;
    }

    for (auto now: sum_array){
        sum += now;
    }

    cout << endl << "Their sum:" << endl << sum;
}