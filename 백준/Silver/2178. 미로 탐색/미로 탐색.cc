#include <bits/stdc++.h>

using namespace std;

string temp[100];
int board[100][100] = { 0, };
int visited[100][100] = { 0, };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    constexpr int dx[4] = {1,0,-1,0};
    constexpr int dy[4] = {0,1,0,-1};

    for (int i = 0; i < n; i++)
        cin >> temp[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            board[i][j] = static_cast<int>(temp[i][j] - 48);

    queue<pair<int, int>> Q;
    Q.push({0,0});
    visited[0][0] = 1;
    while(!(Q.empty()))
    {
        pair<int, int> cur = Q.front();
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && board[nx][ny] != 0 && visited[nx][ny] == 0)
            {
                visited[nx][ny] = visited[cur.first][cur.second] + 1;
                Q.push({nx, ny});
            }
        }
    }
    cout << visited[n-1][m-1];
}