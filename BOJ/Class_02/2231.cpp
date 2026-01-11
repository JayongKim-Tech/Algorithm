#include <iostream>
#include <cmath>
using namespace std;

bool cal(int creator, int num)
{
    int sum = 0;
    int cur = creator;

    while(cur > 0)
    {
        sum += cur%10;
        cur = cur/10;
    }
    if(creator + sum == num) return true;
    else return false;
    
}

int main()
{
    int num;
    int creator;
    bool res = false;

    cin >> num;
    for(int i = 1; i < num; i++)
    {
        if(cal(i,num))
        {
            res = true;
            cout << i;
            break;
        }
    }
    if(res==false) cout << 0;
}