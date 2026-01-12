#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long sum = 0;
    long long r_power = 1; // 31의 0승부터 시작
    long long M = 1234567891;

    cin >> n;
    vector <char> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum  += (arr[i] -'a'+ 1)* r_power % M;

        r_power = r_power  %M * 31 % M;
    }

    cout <<sum % M;
}