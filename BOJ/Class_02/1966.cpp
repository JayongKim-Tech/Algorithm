#include <iostream>
#include <deque>
#include <algorithm> // max_element 사용을 위해

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    // pair<문서번호, 중요도>
    deque<pair<int, int>> dq;
    for (int i = 0; i < n; i++) {
        int priority;
        cin >> priority;
        dq.push_back({i, priority});
    }

    int count = 0;
    while (!dq.empty()) {
        int cur_idx = dq.front().first;
        int cur_priority = dq.front().second;
        dq.pop_front();

        // 1. 현재 문서보다 중요도가 높은 문서가 있는지 확인
        bool has_high = false;
        for (auto doc : dq) {
            if (doc.second > cur_priority) {
                has_high = true;
                break;
            }
        }

        if (has_high) {
            // 2. 더 높은 게 있으면 다시 뒤로 보내기
            dq.push_back({cur_idx, cur_priority});
        } else {
            // 3. 내가 제일 높으면 인쇄!
            count++;
            // 만약 방금 인쇄한 게 내가 찾던 번호(m)라면?
            if (cur_idx == m) {
                cout << count << "\n";
                return;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}