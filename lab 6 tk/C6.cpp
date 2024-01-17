#include <bits/stdc++.h>
using namespace std;


int main() {
    int number; cin >> number;
    vector <int> first_line;
    vector <int> second_line;


    for (int i = 0; i < number; i++) {
        int num; cin >> num;
        first_line.push_back(num);
    }

    for (int i = 0; i < number; i++) {
        int num; cin >> num;
        second_line.push_back(num);
    }

    sort(first_line.begin(), first_line.end());
    sort(second_line.begin(), second_line.end());

    int j = 0;
    int answer = 0;
    for (int i = 0; i < number; i++) {
        int num = j;
        for (j; j < number; j++) {
            if (j == number - 1 && first_line[i] != second_line[j]) {
                j = num;
                break;
            }
            if (first_line[i] == second_line[j]) {
                answer++; j++;
                break;
            }
        }
    }
    cout << answer;


}