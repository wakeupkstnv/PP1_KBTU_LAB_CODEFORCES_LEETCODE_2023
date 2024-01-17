#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int min;
    if (a > b){
        min = b;
    }
    else{
        min = a;
    }
    int answer = 1;

    for (int i = 1; i <= min; i++){
        if (a % i == 0 and b % i == 0){
            answer = i;
        }
    }

    return answer;
}
int main(){
    int n; cin >> n;
    int array[n];
    vector <int> gcd_collections;

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (array[i] != array[j])
                gcd_collections.push_back(gcd(array[i], array[j]));
        }
    }

    int max = gcd_collections[0];

    for (int i = 1; i < gcd_collections.size(); i++){
        if (max < gcd_collections[i]){
            max = gcd_collections[i];
        }
    }

    cout << max;
}