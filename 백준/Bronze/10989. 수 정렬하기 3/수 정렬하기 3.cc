#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, arr[10001] = {0,};
    cin >> n;

    while (n--)
    {
        int num;
        cin >> num;
        arr[num]++;
    }

    for (int i = 1; i < 10001; i++)
        while (arr[i]--)
            cout << i << '\n';
}
