#include <iostream>
#include <string> // getline을 쓰기 위해 필요!

using namespace std;

int main() {
    string s;

    // 읽을 수 있는 줄이 있는 동안 계속 반복!
    while (getline(cin, s)) {
        // 읽은 문장을 그대로 출력
        cout << s << "\n";
    }

    return 0;
}