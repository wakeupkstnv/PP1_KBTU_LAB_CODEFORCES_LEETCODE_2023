#include <bits/stdc++.h>
using namespace std;

void solve() {
    int size; 
    cin >> size;
    vector<int> numbers;

    for (int i = 0; i < size; i++) {
        int n; 
        cin >> n;
        numbers.push_back(n);
    }

    int j = 0;

    for (int i = 0; i < size; i++) {
        j = 0;
        int answer = 0;
        vector<int> numbers_dubl = numbers;
        long long k = numbers_dubl[i];
        numbers_dubl.erase(numbers_dubl.begin() + i);

        for (j; j < numbers_dubl.size(); j++) {
            if (k >= numbers_dubl[j]) {
                k += numbers_dubl[j];
                numbers_dubl.erase(numbers_dubl.begin() + j);
                j = 0;
                answer++;
            }
        }
        if (k >= numbers_dubl[0] and numbers_dubl.size() >= 1){
            answer++;
        }
        cout << answer << " ";
    }
}

int main() {
    int t; 
    cin >> t;

    while (t--) {
        solve();
        cout <<'\n';
    }

    return 0;
}
