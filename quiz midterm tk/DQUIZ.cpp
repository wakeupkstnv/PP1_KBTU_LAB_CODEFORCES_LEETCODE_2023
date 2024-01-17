#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int array[n];

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (array[i] > array[j]){
                int change = array[i];
                array[i] = array[j];
                array[j] = change;
            }
        }
    }
    int check = array[0], index = 0, answer = array[0], count = 0;
    for (int i = 0; i < n; i++){
        if (array[i] == check){
            count++;
            continue;
        }
        index = i;
        check = array[i];
        break;
    }

    int second_count = 0;
    for (int i = index; i < n; i++){
        if (array[i] == check && i != n - 1){
            second_count++;
            continue;
        }
        if (i == n - 1){
            if (array[i] == check) {
                second_count++;
                if (second_count > count) {
                    count = second_count;
                    answer = check;
                }
                break;
            }
        }

        if (second_count > count){
            count = second_count;
            answer = check;
            second_count = 1;
        }
        check = array[i];

    }

    cout << answer;
}