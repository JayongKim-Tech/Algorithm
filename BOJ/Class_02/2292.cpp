#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int floor =1;
    int cur = 1;
    int num;

    cin >> num;

    while(cur < num)
    {
        cur += (6 * floor); 
        floor++;
    }

    cout << floor;
}