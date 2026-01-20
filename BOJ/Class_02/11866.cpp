#include <deque>
#include <iostream>

using namespace std;

int main()
{

    int n , k;
    int check =0 ;
    int res;
    deque <int> arr;
    deque <int> arr_res;

    cin >> n >> k;

    for(int i =0; i < n; i++) arr.push_back(i+1);

    while(arr.size() > 0)
    {
        check++;
        if(check != k)
        {
            arr.push_back(arr[0]);
            arr.pop_front();
        }
        else
        {
            check = 0;
            arr_res.push_back(arr[0]);
            arr.pop_front();
        }
    }

    cout << "<";
    for (int i = 0; i < n; i++) 
    {
        cout << arr_res[i];
        if (i != n - 1) cout << ", ";
    }
    cout << ">";




}