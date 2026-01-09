#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int row, col;
    int input_res;
    int arr[101][101];

    cin >> row >> col;

    for(int x=0; x < 2; x++)
    {
        for(int i =0; i < row; i++)
        {   
            for(int j=0; j< col; j++)
            {
                cin >> input_res;
                if(arr[i][j] != NULL)
                {
                    arr[i][j] += input_res;
                }else
                {
                    arr[i][j] = input_res;
                }
            }
        }
    }

    for(int i =0; i < row; i++)
    {
        for(int j=0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}