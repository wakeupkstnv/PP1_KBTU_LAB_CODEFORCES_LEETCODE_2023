#include <bits/stdc++.h>
using namespace std;

int main(){
    int userNumber; cin >> userNumber;
    int array[userNumber][userNumber];
    int num = 0;

    for (int i = 0; i < userNumber; i++){
        for (int j = 0; j < userNumber; j++){
            if(i == 0){
                for (int k = 0; k < userNumber; k++) {
                    array[i][k] = k;
                }
                continue;
            }
            if(j == 0 || j == 1){
                array[i][j] = num;
                continue;
            }
            array[i][j] = array[i][j - 1] + num;
        }
        num++;
    }

    for (int i = 0; i < userNumber; i++){
        for (int k = 0; k < userNumber; k++){
            if (k == userNumber - 1){
                cout << array[i][k] << endl;
                continue;
            }
            cout << array[i][k] << " ";
        }
    }
}