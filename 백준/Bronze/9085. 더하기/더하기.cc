#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int sum = 0;

        while(n--)
        {
            int k;
            cin >> k;
            sum += k;
        }

        cout << sum << '\n';
    }
}
