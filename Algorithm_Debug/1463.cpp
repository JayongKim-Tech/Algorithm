#include <iostream>
#include <cmath>

using namespace std;

int memory[1000001];


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0;
	int cnt = 0;
	memory[1] = 0;

	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		int first, sec, third = 0;
		int min = 0;


		if (i % 2 == 0)
		{
			sec = memory[i / 2];
			if (min == 0 || min > sec) min = sec+1;
		}
		if (i % 3 == 0)
		{
			third = memory[i / 3];
			if (min == 0 || min > third) min = third+1;
		}
		if (i > 1)
		{
			first = memory[i - 1];
			if (min == 0 || min > first) min = first+1;
		}

		memory[i] = min;

	}


	cout << memory[n];

}