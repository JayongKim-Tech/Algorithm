#include <iostream>
#include <deque>
#include <string>
using namespace std;

void push_int(int x, deque<int> &arr)
{
    arr.push_back(x);
}

void pop_int(deque<int> &arr)
{
    if(arr.size() > 0) 
    {
        cout << arr[0] << "\n";
        arr.pop_front();
    }
    else cout << "-1" << "\n";
}

void size(deque<int> &arr)
{
    cout << arr.size() << "\n";
}

void empty(deque<int> &arr)
{
    if(arr.size() == 0) cout << 1 << "\n";
    else cout << 0 << "\n";
}

void front_output(deque<int> &arr)
{
    if(arr.size() > 0) cout << arr[0] << "\n";
    else cout << -1 << "\n";
}

void end_output(deque<int> &arr)
{
    if(arr.size() > 0) cout << arr[arr.size()-1] << "\n";
    else cout << -1 << "\n";
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    deque <int> int_arr;
    
    int n;
    string _input;
    int x;

    cin >> n ;

    for(int i =0 ;i < n; i++)
    {
        cin >> _input;

        if(_input == "push") 
        {
            cin >> x;
            push_int(x, int_arr);
        }
        else if(_input == "front") front_output(int_arr);
        else if(_input == "pop") pop_int(int_arr);
        else if(_input == "size") size(int_arr);
        else if(_input == "back") end_output(int_arr);
        else empty(int_arr);

    }

}