#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    int n;
    int res;

    vector <int> arr;
    
    cin >> n;

    for(int i =0; i < n; i++)
    {
        cin >> res;
        arr.push_back(res);
    }

    sort(arr.begin(), arr.end());

    for(int i =0; i < n; i++) cout << arr[i] << "\n";

}