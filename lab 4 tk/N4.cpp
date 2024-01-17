#include <bits/stdc++.h>
using namespace std;

int main(){

    int number; cin >> number;

    for (int i = 2; i <= number; i++){
        int count = 0;
        for (int j = 1; j <= number; j++){
            if (i % j == 0){
                count++;
            }
        }
        if (count <= 2){
            cout << i << " is prime" << endl;
        }
    }
}