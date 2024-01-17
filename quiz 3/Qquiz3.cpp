#include <bits/stdc++.h>
using namespace std;

int main() {
    int number; cin >> number;
    vector <string> mails;
    string mail = "@gmail.com";

    for (int i = 0; i < number; i++){
        string n; cin >> n;
        mails.push_back(n);
    }

    for (auto now: mails){
        for (int i = 0; i < now.size(); i++){
            if (now[i] == '@' && now.size() - i >= mail.size() - 1){
                string k = now.substr(i, i + mail.size());
                if (k == mail){
                    cout << now.substr(0, i) << endl;
                    break;
                }
            }
        }
    }

}