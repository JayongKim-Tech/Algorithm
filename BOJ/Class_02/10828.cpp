#include <iostream>
#include <deque>
#include <string>
using namespace std;

void push_int(int x, deque<int> &arr)
{
    arr.push_front(x);
}

void pop_int(deque<int> &arr)
{
    cout << arr[0] << "\n";
    arr.pop_front();
}

void size(deque<int> &arr)
{
    cout << arr.size() << "\n";
}

void empty(deque<int> &arr)
{
    if(arr.size() == 0) cout << 0 << "\n";
}

void top_output(deque<int> &arr)
{
    if(arr.size() > 0) cout << arr[0] << "\n";
    else cout << -1 << "\n";
}

int main()
{
    deque <int> int_arr;
    
    int n;
    string _input;
    int x;

    cin >> n ;

    for(int i =0 ;i < n; i++)
    {
        cin >> _input;
        if(stoi(_input)) x = stoi(_input);

    }

    



}