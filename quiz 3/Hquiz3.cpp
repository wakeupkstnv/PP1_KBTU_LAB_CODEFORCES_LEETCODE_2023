#include <bits/stdc++.h>
using namespace std;

int percent_top(int a, int b){
    return a / b;
}

int main(){
    int n; cin >> n;
    string name[n]; int price[n], equ[n];
    vector <int> percent;

    for (int i = 0; i < n; i++){
        cin >> name[i] >> price[i] >> equ[i];
    }

    int min = INT_MAX, index = 0;
    for (int i = 0; i < n; i++){
        int idk_var = percent_top(price[i], equ[i]);
        if (min > idk_var){
            min = idk_var;
            index = i;
        }
    }

    cout << name[index];
}