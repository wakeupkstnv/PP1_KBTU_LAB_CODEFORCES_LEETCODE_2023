#include <bits/stdc++.h>
using namespace std;

void stepByStep(int** arr[], int col, int siz) {

}
int main() {
    int column, size; cin >> column >> size;
    int array[column][size];

    for (int i = 0; i < column; i++) {
        for (int j = 0; j < size; j++) {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < column; j++) {
            cout << array[j][i] << " ";
        }
        cout << endl;
    }
}