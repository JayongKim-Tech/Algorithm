#include <iostream>
#include <vector>

using namespace std;

struct Pesrson
{
	int weight;
	int height;

};

int main()
{

	// 첫째줄에 학생수 입력
	// 둘째줄 부터 n번째까지 몸무게, 키 입력(2차원 배열로 저장 필요)
	// 몸무게 and 키 가장 높은순위로 등수 매겨야함
	// 학생1키 > 학생2 키  == 학생1 몸무게 < 학생2 몸무게
	// 그럼 만약 같은등수 나왔을 때 그다음등수는 몇등? 등수가 정해진거를 카운터 추가 할 필요가 있어보임..

	int n;

	cin >> n;

	vector <Pesrson> arr(n);
	vector <int> res(n,1);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].weight;
		cin >> arr[i].height;
	}

	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[i].weight < arr[j].weight && arr[i].height < arr[j].height)
			{
				res[i]++;
			}
			else if(arr[i].weight > arr[j].weight && arr[i].height >  arr[j].height) res[j]++;
	}


	for (int i = 0; i < res.size(); i++) cout << res[i] << " ";



}