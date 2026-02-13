#include <iostream>
#include <queue>

using namespace std;

queue<int> memory[101];
queue<int> dist;
bool check[101];


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt;
	int connect_cnt;
	int res = 0;

	dist.push(1);

	cin >> cnt;
	cin >> connect_cnt;

	check[1] = true;

	for (int i = 0; i < connect_cnt; i++)
	{
		int cmp1, cmp2;

		cin >> cmp1 >> cmp2;

		memory[cmp1].push(cmp2);
		memory[cmp2].push(cmp1);
	}

	while (dist.size() > 0)
	{
		if (memory[dist.front()].size() > 0)
		{
			int n = dist.front();
			dist.pop();

			for (int i = 0; memory[n].size(); i++)
			{
				int n2;

				n2 = memory[n].front();

				if (!check[n2])
				{
					check[n2] = true;
					res += 1;
				}

				dist.push(n2);
				memory[n].pop();
			}
		}
		else dist.pop();
	}

	cout << res;

}