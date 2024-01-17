#include <bits/stdc++.h>
using namespace std;

int main() {
    string digits; cin >> digits;
    string digits_without_dublicate = "";
    int array[digits.length()];
    if (digits.length() != 1 && digits.length() % 2 == 1) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < digits.length(); i++) {
        array[i] = int(digits[i] - 48);
    }

    for (int i = 0; i < digits.length(); i++) {
        for (int j = i + 1; j < digits.length(); j++) {
            if (array[i] > array[j]) {
                int number = array[j];
                array[j] = array[i];
                array[i] = number;
            }
        }
    }
    int number = 0, index = 0;
    for (int i = 0; i < digits.length(); i++) {
        for (int j = 0; j < digits.length(); j++) {
            if (array[i] == array[j]) {
                number++;
                continue;
            }
            index = j;
            break;
        }
        break;
    }
    if (index == 0) {
        cout << "YES";
        return 0;
    }
    else {
        int i = index, j = index;

        for (i; i < digits.length() + 1; i++) {
            int second_number = 0;
            for (j; j < digits.length() + 1; j++) {
                if (array[i] == array[j]) {
                    second_number++;
                }

                if (array[i] != array[j]) {
                    if (second_number != number) {
                        cout << "NO";
                        return 0;
                    }

                }
            }
        }
        i = j;

    }
    cout << "YES";
}