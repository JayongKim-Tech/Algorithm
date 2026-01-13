#include <iostream>

using namespace std;

// 최대공약수(GCD)를 구하는 표준 함수
int get_gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int gcd = get_gcd(a, b);
    
    // LCM = (a * b) / gcd 공식 활용
    // 곱하기를 먼저 하면 int 범위를 넘을 수 있으니 나누기부터 하는 게 안전해요!
    int lcm = (a * b) / gcd;

    cout << gcd << "\n" << lcm;

    return 0;
}