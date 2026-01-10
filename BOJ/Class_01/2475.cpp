#include <iostream>

using namespace std;

void calc(int a, int b, int c, int d, int e ,int& re)
{
    re = ((a*a)+(b*b)+(c*c)+(d*d)+(e*e))%10;
}

int main()
{
    ios::sync_with_stdio(false);
    int a,b,c,d,e;
    int res;

    cin >> a >> b >> c >> d >>e;
    calc(a,b,c,d,e,res);

    cout << res;
}

