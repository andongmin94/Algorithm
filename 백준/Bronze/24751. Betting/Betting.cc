#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a;
    cin >> a;

    cout << fixed << setprecision(10) << 100 / a << '\n' << 100 / (100 - a);
}