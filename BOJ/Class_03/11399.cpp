	#include <iostream>
	#include <algorithm>
	#include <vector>
	using namespace std;

	int main()
	{

		int n;
		int sum = 0;
		int cur = 0;
		vector <int> arr;

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			int input_n;
			cin >> input_n;
			arr.push_back(input_n);
		}

		sort(arr.begin(), arr.end());

		for (int i = 0; i < n; i++)
		{
			cur += arr[i];

			sum += cur;
		}

		cout << sum;

	}