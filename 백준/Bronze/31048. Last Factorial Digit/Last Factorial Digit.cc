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
        int a;
        cin >> a;

        int sum = 1;
        for (int i = 1; i <= a; i++)
            sum *= i;
        cout << sum % 10 << '\n';
    }
}
