#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;


bool visited[1001];
vector <int> board[1001];
vector <int> res_dcr;
vector <int> res_bcr;
deque <int> dist;


void dcr(int cur)
{
	visited[cur] = true;
	res_dcr.push_back(cur);

	// 연결되어있는 애들중에 방문 안한 애들 탐색
	for (int i = 0; i < board[cur].size(); i++)
	{
		int next = board[cur][i];
		if (!visited[next])
		{
			dcr(next);
		}
	}

}

void bcr(int cur)
{
	visited[cur] = true;
	res_bcr.push_back(cur);
	dist.push_back(cur);

	while(dist.size() > 0)
	{
		cur = dist.front();

		dist.pop_front();

		for (int i = 0; i < board[cur].size(); i++)
		{
			int next = board[cur][i];
			if (!visited[next])
			{
				dist.push_back(next);
				visited[next] = true;
				res_bcr.push_back(next);
			}
		}

	}

}

int main()
{
	int n, m, start;

	cin >> n >> m >> start;

	for (int i = 0; i < m; i++)
	{
		int num1, num2;

		cin >> num1 >> num2;

		board[num1].push_back(num2);
		board[num2].push_back(num1);
	}


	for (int i = 1; i < n+1; i++)
	{
		sort(board[i].begin(), board[i].end());
	}

	dcr(start);

	memset(visited, false, sizeof(visited));

	bcr(start);

	for (int i = 0; i < res_dcr.size(); i++)
	{
		cout << res_dcr[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < res_bcr.size(); i++)
	{
		cout << res_bcr[i] << " ";
	}

}