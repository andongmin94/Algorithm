#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        cout << b * 2 - a << ' ' << a - b << '\n';
    }
}
