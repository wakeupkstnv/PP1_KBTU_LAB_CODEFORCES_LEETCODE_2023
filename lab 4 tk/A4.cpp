#include <bits/stdc++.h>
using namespace std;

int main(){
    long long userNumber; cin >> userNumber;
    long long array[userNumber][userNumber];

    for(int i = 0; i < userNumber; i++){
        for(int j = 0; j < userNumber; j++){
            cin >> array[i][j];
        }
    }

    int max = array[0][0];

    for (int i = 0; i < userNumber; i++){
        for (int j = 0; j < userNumber; j++){
            if (array[i][j] > max){
                max = array[i][j];
            }
        }
    }

    cout << max;

    return 0;
}