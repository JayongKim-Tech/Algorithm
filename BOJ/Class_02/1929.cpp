#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. 속도 향상 (100만 개 출력할 땐 필수!)
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    // 2. n번 칸까지 필요하니까 n+1 크기로 만들고 true로 초기화
    // 인덱스 0부터 n까지 바로 사용 가능!
    vector<bool> isPrime(n + 1, true);

    // 3. 0과 1은 소수가 아니니까 탈락
    isPrime[0] = isPrime[1] = false;

    // 4. 에라토스테네스의 체 (이 2중 for문이 정석이야)
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) { // i가 소수라면
            // i의 배수들을 i*i부터 시작해서 n까지 다 지움
            for (int j =  i *i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // 5. m부터 n까지 살아남은 소수만 출력
    for (int i = m; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << "\n";
        }
    }

    return 0;
}