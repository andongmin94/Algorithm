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
        string s;
        cin >> s;
        s = s[s.length() - 1];
        if (stoi(s) & 1) cout << "odd\n";
        else cout << "even\n";
    }
}
