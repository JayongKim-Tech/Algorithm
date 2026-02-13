#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int memory[41][2];


int main()
{

	int test_case;
	int n;
	vector<int> num;
	int cur = 1;

	memory[0][0] = 1;
	memory[0][1] = 0;
	memory[1][0] = 0;
	memory[1][1] = 1;

	for (int i = 2; i < 41; i++)
	{
		memory[i][0] = memory[i - 1][0] + memory[i - 2][0];
		memory[i][1] = memory[i - 1][1] + memory[i - 2][1];
	}



	cin >> test_case;

	for (int i = 0; i < test_case; i++)
	{
		cin >> n;

		num.push_back(n);
	}

	for (int i = 0; i < num.size(); i++)
	{
		int n = num[i];
		cout << memory[n][0] << " " << memory[n][1] << "\n";
	}




}