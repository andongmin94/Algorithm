#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if (a + b == c) cout << a << '+' << b << '=' << c;
    else if (a == b + c) cout << a << '=' << b << '+' << c;
    else if (a - b == c) cout << a << '-' << b << '=' << c;
    else if (a == b - c) cout << a << '=' << b << '-' << c;
    else if (a * b == c) cout << a << '*' << b << '=' << c;
    else if (a == b * c) cout << a << '=' << b << '*' << c;
    else if (a / b == c) cout << a << '/' << b << '=' << c;
    else if (a == b / c) cout << a << '=' << b << '/' << c;
}
