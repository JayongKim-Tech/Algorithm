#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 1;
    vector<int> v;

    while(n)
    {
        cin >> n;
        if(n != 0) v.push_back(n);
    }

    for(int i = 0 ; i < sizeof(v); i++)
    {
        if(v[i]/10 > 0)
        {
            
        }
    }
}