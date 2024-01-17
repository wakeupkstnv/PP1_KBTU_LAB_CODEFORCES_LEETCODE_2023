#include <bits/stdc++.h>
using namespace std;

void hypotenuse(double a, double b) {
    cout << setprecision(4) << sqrt(a * a + b * b);
}

int main() {
    double a, b; cin >> a >> b;

    hypotenuse(a, b);
}