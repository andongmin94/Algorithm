#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int carry = 0;
        int cnt = 0;
        vector<string> num(2);
        cin >> num[0] >> num[1];
        if (num[0] == "0" && num[1] == "0") break;
        sort(num.rbegin(), num.rend());
        string a = num[0], b = num[1];
        for (int i = 0; i < a.size(); i++)
        {
            if (b[b.size() - 1 - i] - '0' >= 0)
            {
                if (a[a.size() - 1 - i] - '0' + b[b.size() - 1 - i] - '0' + cnt >= 10)
                {
                    carry++;
                    cnt = 1;
                }
                else cnt = 0;
            }
            else
            {
                if (a[a.size() - 1 - i] - '0' + cnt >= 10)
                {
                    carry++;
                    cnt = 1;
                }
                else cnt = 0;
            }
        }
        cout << carry << '\n';
    }
}
