#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    
    while (true) {
        string s;
        getline(cin, s); // 공백 포함 한 줄 읽기
        if (s == ".") break; // 종료 조건

        stack<char> st;
        bool check = true;

        for (char x : s) {
            if (x == '(' || x == '[') {
                st.push(x);
            } 
            else if (x == ')') {
                if (!st.empty() && st.top() == '(') st.pop();
                else { check = false; break; }
            } 
            else if (x == ']') {
                if (!st.empty() && st.top() == '[') st.pop();
                else { check = false; break; }
            }
        }

        if (check && st.empty()) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}