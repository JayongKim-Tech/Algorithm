#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    long member;

    int arr_size[6];

    int buy_shirt = 0;
    int buy_pen = 0;
    int buy_pen_end = 0;
    int t =0;
    int p = 0;

    cin >> member;

    for(int i = 0; i < 6; i++)
    {
        cin >> arr_size[i];
    }

    cin >> t >> p;

    buy_pen_end = member%p;
    buy_pen = (member/p);

    for(int i = 0; i < 6; i++)
    {
        if(arr_size[i] > 0) 
        {
            buy_shirt += (arr_size[i] - 1) / t + 1;
        }
    
    }


    cout << buy_shirt << "\n";
    cout << buy_pen << " " << buy_pen_end;

}