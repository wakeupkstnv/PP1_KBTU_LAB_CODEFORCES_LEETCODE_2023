#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(j == (n - i) - 1) {
                cout << i + 1;

                if (j == n - 1){
                    cout << endl;
                }

                continue;
            }

            cout << ".";

            if (j == n - 1){
                cout << endl;
            }

        }
    }

}
