#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    double sum = 0;
    double _max = 0;
    double res = 0.0;
    vector <double> arr;
    
    cin >> n;

    for(int i = 0; i <n; i++)
    {
        cin >> sum;
        arr.push_back(sum);
        if(_max < sum) _max = sum;
    }

    sum = 0;

    for(int i =0; i < n; i++)
    {
        res = arr[i]/_max * 100;
        sum += res;
    }

    res = sum/n;

    cout << fixed << setprecision(9) << res << "\n";
}