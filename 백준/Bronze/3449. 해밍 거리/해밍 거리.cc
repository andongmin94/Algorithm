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
        string a, b;
        cin >> a >> b;
        int cnt = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i]) cnt++;
        }
        cout << "Hamming distance is " << cnt << ".\n";
    }
}
