	#include <iostream>
	#include <vector>
	#include <set>
	#include <algorithm>
	using namespace std;

	int main()
	{
		cin.tie(NULL);
		ios::sync_with_stdio(false);

		long n,m;

		string s;

		set<string> listen;
		vector<string> find;

		cin >> n >> m;


		for (int i = 0; i < n + m; i++)
		{
			cin >> s;

			if (i >= n)
			{
				if (listen.end() != listen.find(s))
				{
					find.push_back(s);
				}

			}
			else
			{
				listen.insert(s);
			}
		}


		sort(find.begin(), find.end());


		cout << find.size() << "\n";

		for (int i = 0; i < find.size(); i++)
		{
			cout << find[i] << "\n";
		}



	}