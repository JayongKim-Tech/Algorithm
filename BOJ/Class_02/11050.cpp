#include <iostream>
#include <vector>
using namespace std;


int get_people(int k, int n)
{
    if(k == 0) return n;
    if(n == 1) return 1;
    return get_people(k,n-1) + get_people(k-1,n);
}
int main()
{
    int t;
    int k, n;
    int sum = 0;
    vector<int> arr;

    cin >> t ;

    for(int i = 0; i<t; i++) 
    {
        cin >> k;
        cin >> n;
        arr.push_back(get_people(k,n));
    }

    for(int i =0; i < t; i++) cout << arr[i] << "\n";

}