#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    if(a < b) return a < b;

    else return a < b;
}

void explorer(int a,int start, int end, vector<int> &arr)
{
    int mid = (start+end)/2;
    if (start > end) { cout << 0 << "\n"; return; }
    else if (arr[mid] == a) {cout << 1 << "\n"; return; }
    else if (arr[mid] > a) {explorer(a, start, mid-1, arr);}
    else if (arr[mid] < a) {explorer(a, mid+1, end, arr);}
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int m;

    cin >> n;

    vector <int> arr(n);
    int res;

    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end(), compare);

    cin >> m;

    vector <int> _arr(m);

    for(int i =0; i < m; i++) 
    {
        cin >> _arr[i];
    }

    for(int i= 0; i < m; i++)
    {
        explorer(_arr[i], 0, arr.size()-1, arr);
    }


}