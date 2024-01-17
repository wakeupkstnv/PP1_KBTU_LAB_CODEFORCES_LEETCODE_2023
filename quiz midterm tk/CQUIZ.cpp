#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int cardCollection[n];
    string even_collection = "", odd_collection = "";

    for (int hui = 0; hui < n; hui++){
        cin >> cardCollection[hui];

        if(cardCollection[hui] % 2 == 0){
            even_collection += to_string(cardCollection[hui]) + " ";
            continue;
        }
        odd_collection += to_string(cardCollection[hui]) + " ";
    }

    cout << even_collection + odd_collection;




}