#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int x;
    int _input;
    int res = 0;
    stack <int> arr;

    cin >> x;

    for(int i =0; i < x; i++)
    {
        cin >>_input;

        if(_input == 0) arr.pop();
        else arr.push(_input);
    }

    while(arr.size() > 0) 
    {
        res += arr.top();
        arr.pop();
    }
    
    cout << res;
}