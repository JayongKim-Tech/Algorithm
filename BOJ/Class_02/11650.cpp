#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Mydata
{
    int x;
    int y;
};

bool compare(Mydata a, Mydata b)
{
    if(a.x == b.x)
    {
        return a.y < b.y;
    }
    else return a.x < b.x;
    
}

int main()
{
    int n;
    int x,y;
    cin >> n;

    vector<Mydata> arr(n);

    for(int i =0; i < n; i++)
    {
        cin >> x >> y;

        arr[i].x = x;
        arr[i].y = y;
    }
    
    sort(arr.begin(), arr.end(), compare);

    for(Mydata x:arr) cout << x.x << " " << x.y << "\n";

    return 0;


}