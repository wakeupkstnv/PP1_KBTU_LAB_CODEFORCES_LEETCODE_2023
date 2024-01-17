#include <bits/stdc++.h>
using namespace std;

float percentOff(float all, float girls) {
    return (girls / all) * 100;
}
int main() {
    float value, number; cin >> value >> number;
    cout << percentOff(value, number);
}