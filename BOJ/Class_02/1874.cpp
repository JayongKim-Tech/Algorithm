#include <iostream>
#include <stack>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int input_n;
    int cur =0;
    stack<int> arr;
    deque<char> res;

    cin >> n;

    for(int i = 0; i<n; i++)
    {
        cin >> input_n;

        while(cur < input_n)
        {
            cur++;
            arr.push(cur);
            res.push_back('+');
        }
        if(!arr.empty()&&arr.top() == input_n)
        {
            arr.pop();
            res.push_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    for(char x: res) cout << x << "\n";

}