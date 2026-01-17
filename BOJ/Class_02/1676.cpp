#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    int sum = 0;

    cin >> n;

    while(n >= 1)
    {
        sum += n/5;
        n = n/5;
    }

    cout << sum;
    
}