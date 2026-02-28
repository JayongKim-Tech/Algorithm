#include <iostream>
#include <stack>

using namespace std;


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int _case;
	int row, col, bug;

	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = {0, 0, -1, 1};

	cin >> _case;

	for (int i = 0; i < _case; i++)
	{

		bool map[50][50] = { 0, };      // 반드시 0(false)으로 초기화!
		bool visited[50][50] = { 0, };  // 얘도 마찬가지입니다. ㅋ
		int worm_cnt = 0;

		cin >> col >> row >> bug;

		//배추위치
		for (int j = 0; j < bug; j++)
		{
			int x, y;
			cin >> x >> y;
			map[x][y] = true;
		}

		for (int j = 0; j < row; j++)
		{
			for (int z = 0; z < col; z++)
			{
				if (map[z][j] && !visited[z][j])
				{
					stack<pair<int, int>> _stack;
					{
						worm_cnt++;
						visited[z][j] = true;
						_stack.push({z,j});
						while (!_stack.empty())
						{
							pair<int, int> cur = _stack.top();
							_stack.pop();

							for (int x = 0; x < 4; x++)
							{
								int nx = cur.first + dx[x];
								int ny = cur.second + dy[x];

								if (nx >= 0 && nx < col && ny >= 0 && ny < row) //범위벗어났는지 확인
								{
									if (map[nx][ny] && !visited[nx][ny]) // 근접해 있는애들중에 배추가있으면
									{
										visited[nx][ny] = true; //근접해있으면 일단 방문 확인
										_stack.push({ nx, ny }); // 해당 주변애들도 확인을 위해 push
									}
								}
							}
						}

					}

				}
			}
		}

		cout << worm_cnt << "\n";



	}

}