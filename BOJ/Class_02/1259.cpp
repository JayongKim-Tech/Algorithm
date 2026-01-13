#include <iostream>
#include <string> // 숫자가 아닌 문자열로 처리하기 위해!
#include <algorithm> // 뒤집기 함수 쓰기 위해

using namespace std;

int main() {
    // 코딩 테스트 필수 세트 (속도 향상)
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    while (true) {
        cin >> s; // 숫자를 문자열 "121"로 통째로 받음

        if (s == "0") break; // 종료 조건

        // 1. 원본을 복사해서 뒤집어본다
        string original = s;
        reverse(s.begin(), s.end()); // 문자열 뒤집기 마법!

        // 2. 뒤집은 게 원래랑 똑같으면 팰린드롬!
        if (original == s) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}