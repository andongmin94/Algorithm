#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    //
    int dis = board.size();
    int dx[] = {0,1,0,-1};
    int dy[] = {1,0,-1,0};
    for (int i = 0; i < 4; i++)
    {
        int nx = h + dx[i];
        int ny = w + dy[i];
        if (nx < 0 || nx >= dis) continue;
        if (ny < 0 || ny >= dis) continue;
        if (board[nx][ny] == board[h][w]) answer++;
    }
    //
    return answer;
}