#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    
    sort(v.begin(), v.end());
    cout << v[0] * v[2];
}