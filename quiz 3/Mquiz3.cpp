#include <bits/stdc++.h>
using namespace std;

int to_ascii(string letters){
    int n = 0;

    for (int i = 0; i < letters.size(); i++){
        n += letters[i];
    }

    return n;
}

int main(){
    string dish; cin >> dish;
    int check = to_ascii(dish);

    if (check > 300){
        cout << "It is tasty!";
    }
    else{
        cout << "oh, no!";
    }
}