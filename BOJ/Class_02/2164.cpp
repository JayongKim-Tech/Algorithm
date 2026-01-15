#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{
    int n;
    int cur =1;

    cin >> n;

    deque<int> arr(n);

    for(int i =0; i < n; i++)
    {
        arr[i] = i+1;
    }

    while(arr.size()>1)
    {
        int res;
        if(cur % 2 != 0) arr.pop_front();
        else 
        {
            res = arr[0];
            arr.pop_front();
            arr.push_back(res);
        }
        cur++;
    }

    cout << arr[0];


}