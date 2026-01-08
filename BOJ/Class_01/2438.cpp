#include <iostream>
using namespace std;

int main()
{
    // 1. C 입출력과의 동기화를 끊어서 속도를 획기적으로 높임
    ios::sync_with_stdio(false);
    
    // 2. 입력과 출력의 연결을 끊어서 입력 대기 시간을 줄임
    cin.tie(NULL);

    int a;
    cin >> a;

    for(int i = 0; i < a; i++)
    {
        for(int j =1; j < i+2; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}