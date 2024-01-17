#include <bits/stdc++.h>
using namespace std;

int main(){
    string message; getline(cin, message);

    for (int i = 0; i < message.size(); i++){
        if (message[i] == 'z' or message[i] == 'Z'){
            message[i] -= ('z' - 'a'); break;
        }
        if (message[i] >= 'a' and message[i] <= 'z' or message[i] >= 'A' and message[i] <= 'Z'){
            message[i]++;
        }
        
    }

    cout << message;
}