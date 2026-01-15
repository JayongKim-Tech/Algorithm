#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int cur = 0;


    cin >> n;

    while(n >= 0)
    {
        if(n % 5 == 0)
        {
            cout << n/5 + cur;
            break;
        }
        cur++;
        n -= 3;
    }

    if(n < 0) cout << -1;

    
}

