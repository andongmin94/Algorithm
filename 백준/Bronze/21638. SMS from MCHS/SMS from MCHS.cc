#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t1,v1,t2,v2;
    cin >> t1 >> v1 >> t2 >> v2;

    bool noMessage = true;

    if (t2 < 0 && v2 >= 10)
    {
        cout << "A storm warning for tomorrow! Be careful and stay home if possible!" << '\n';
        noMessage = false;
    }
    else if (t2 < t1)
    {
        cout << "MCHS warns! Low temperature is expected tomorrow." << '\n';
        noMessage = false;
    }
    else if (t2 >= t1 && v2> v1)
    {
        cout << "MCHS warns! Strong wind is expected tomorrow." << '\n';
        noMessage = false;
    }

    if (noMessage)
        cout << "No message";
}