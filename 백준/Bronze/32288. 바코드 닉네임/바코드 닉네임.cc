#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (auto e : s)
        if (e == 'I') cout << 'i';
        else cout << 'L';
}