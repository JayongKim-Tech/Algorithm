#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int memories[301];
int scores[301];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt;

	cin >> cnt;

	for (int i = 1; i < cnt+1; i++)
	{
		cin >> scores[i];
	}


	for (int i = 1; i < cnt + 1; i++)
	{
		if (i == 1) memories[i] += scores[i]; // 첫번째계단 최댓값
		else if (i == 2) memories[i] = memories[i - 1] + scores[i]; // 두번째 계단 최댓값
		else memories[i] = max(memories[i-2] + scores[i] , scores[i] + scores[i - 1] + memories[i - 3]); // 이것도 좀 애매함 3번째부터 아래 조건식 넣어줘야됨

	}

	cout << memories[cnt];
}