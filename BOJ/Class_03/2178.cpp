#include <iostream>
#include <vector>
#include <deque>
using namespace std;

struct pos
{
    int x;
    int y;

};



int board[101][101]; // 미로를 저장할 통
int dist[101][101];
bool check[101][101];



void bfs(deque <pos> &next, int n ,int m)
{

    int cur_x = 0;
    int cur_y = 0;

    int dx[4] = { 0, 0, -1, 1 };
    int dy[4] = { -1, 1, 0, 0 };

    next.push_back({cur_x, cur_y});
    dist[cur_x][cur_y] = 1;
    check[cur_x][cur_y] = true;


    // 0,0에서 상화좌우 확인
    // 값이 1이면 현재 위치의 거리값++하면서 Push/ 0이면 무시
    // 이동하면서 해당하는 위치에 거리값 push
    while (next.size() > 0)
    {

        cur_x = next.front().x;
        cur_y = next.front().y;


        next.pop_front();


        for (int i = 0; i < 4; i++)
        {
            int nx = cur_x + dx[i];
            int ny = cur_y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m)
            {
                if (board[cur_x + dx[i]][cur_y + dy[i]] == 1 && !check[cur_x + dx[i]][cur_y + dy[i]])
                {
                    if (cur_x + dx[i] == n - 1 && cur_y + dy[i] == m - 1)
                    {
                        dist[cur_x + dx[i]][cur_y + dy[i]] = dist[cur_x][cur_y] + 1;
                        return;
                    }
                    else
                    {
                        dist[cur_x + dx[i]][cur_y + dy[i]] = dist[cur_x][cur_y] + 1;
                        next.push_back({ cur_x + dx[i],cur_y + dy[i] });
                        check[cur_x + dx[i]][cur_y + dy[i]] = true;
                    }
                }
            }
        }

    }


}


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n, m;
    deque <pos> next;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string row;
        cin >> row; // "101111" 이런 식으로 한 줄을 통째로 읽음
        for (int j = 0; j < m; j++) {
            board[i][j] = row[j] - '0'; // 문자를 숫자로 바꿔서 저장
        }
    }

    bfs(next, n, m);

    cout << dist[n - 1][m - 1];

}