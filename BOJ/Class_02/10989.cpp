#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int res;
    int arr[10001] = {0, };

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> res;
        arr[res] +=1;
    }

    for(int i = 0; i < 10001; i++)
    {
        for(int j = 0; j < arr[i]; j++) cout << i << "\n";
    }
}