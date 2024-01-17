#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int number = n, number_2 = n;

    for (int i = 0; i < n; i++){
        if (i == n - 1){
            for (int i = 0; i < (n - 1) * 2 + 1; i++){
                cout << "*";
            }
            break;
        }
        for (int i = 0; i < (n - 1) * 2 + 1; i++){
            if (i  == (n - 1) * 2){
                cout << '.' << endl;
                break;
            }
            if (i >= number - 1 && i <= number_2 - 1){
                cout << '*';
                continue;
            }

            cout << '.';
        }
        number--;
        number_2++;
    }
}