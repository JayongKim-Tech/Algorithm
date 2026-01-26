#include <iostream>
#include <vector>
#include <deque>

using namespace std;

struct pos
{
	int x;
	int y;

};


int board[1001][1001];
int dist[1001][1001];
bool check[1001][1001];

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m;

	cin >> n >> m;



	deque <pos> next;

	int dx[4] = { 0,0,-1,1};
	int dy[4] = { -1,1,0,0};

	int cur_x = 0;
	int cur_y = 0;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 2)
			{
				cur_x = i;
				cur_y = j;
				board[cur_x][cur_y] = 0;
				check[cur_x][cur_y] = true;
				dist[cur_x][cur_y] = 0;
				next.push_back({ cur_x,cur_y });
			}
		}
	}

	while (next.size() > 0)
	{

		cur_x = next.front().x;
		cur_y = next.front().y;
		next.pop_front();

		for (int i = 0; i < 4; i++)
		{
			int x = cur_x + dx[i];
			int y = cur_y + dy[i];

			if (x >= 0 && y >= 0 && x < n && y < m)
			{
				if (board[x][y] == 1 && !check[x][y])
				{
					check[x][y] = true;
					dist[x][y] = dist[cur_x][cur_y] + 1;
					next.push_back({ x, y });
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// 1. 원래 벽(0)이었던 곳은 도달 여부 상관없이 0
			if (board[i][j] == 0) {
				cout << 0 << " ";
			}
			// 2. 벽이 아닌 곳(1 또는 2) 중에서
			else {
				if (check[i][j]) {
					// 방문 성공했다면 계산된 거리 출력 (시작점 2는 여기서 0으로 나옴)
					cout << dist[i][j] << " ";
				}
				else {
					// 길인데 방문 실패했다면 -1
					cout << -1 << " ";
				}
			}
		}
		cout << "\n";
	}
}