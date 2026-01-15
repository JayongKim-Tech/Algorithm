#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

bool check_int(string res)
{
    for(char x: res) 
    {
        if(isdigit(x) == false) return false;
    }
    return true;
}

int main()
{
    int _index;
    int _pivot;
    string _input;
    vector<string> arr;
    for(int i =0; i<3; i++)
    {
        cin >> _input;
        arr.push_back(_input);
    }

    for(int i = 0; i < 3; i++)
    {
        if(check_int(arr[i]))
        {
            _index = i;
            _pivot = stoi(arr[i]);
        } 
    }

    _pivot = _pivot+(3-_index);

    if(_pivot % 3 == 0 && _pivot % 5 != 0) cout << "Fizz";
    else if(_pivot % 3 == 0 && _pivot % 5 == 0) cout << "FizzBuzz";
    else if(_pivot % 3 != 0 && _pivot % 5 == 0) cout << "Buzz";
    else cout << _pivot;

}