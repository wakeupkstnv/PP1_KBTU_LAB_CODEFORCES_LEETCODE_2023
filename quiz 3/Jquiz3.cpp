#include <bits/stdc++.h>
using namespace std;



int main(){
    string palindrom; cin >> palindrom;
    int size_pln = palindrom.size();

    int start = 0;

    while (start != size_pln - 1){
        string without_pal = "", new_pal = "";

        for (int i = start; i < palindrom.size(); i++){
            without_pal += palindrom[i];
        }

        for (int j = without_pal.size() - 1; j >= 0; j--){
            new_pal += without_pal[j];
        }

        if (without_pal == new_pal){
            start++;
        }
        else{
            cout << palindrom.size() - start;
            return 0;
        }
    }
    cout << 0;
}