#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << ' ';

        if (!i) cout << '*';
        else
        {
            cout << '*';
            for (int j = 0; j < 2 * i - 1; j++)
                cout << ' ';
            cout << '*';
        }
        
        cout << '\n';
    }
}
