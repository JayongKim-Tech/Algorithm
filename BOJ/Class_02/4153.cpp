#include <iostream>

using namespace std;

void triangle(int arr[]) {

    long long A = (long long)arr[0] * arr[0];
    long long B = (long long)arr[1] * arr[1];
    long long C = (long long)arr[2] * arr[2];

    if (A + B == C || A + C == B || B + C == A) {
        cout << "right\n";
    } else {
        cout << "wrong\n";
    }
}

int main()
{
    int arr[3];

    while(true)
    {
        for(int i =0; i < size(arr); i++)
        {
            cin >> arr[i];
        }
        if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0) break;

        triangle(arr);
    }

}