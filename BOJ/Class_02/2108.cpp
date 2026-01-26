#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// 1. 산술평균: -0 방지가 핵심
int get_avg(int n, long long sum) {
    // 반드시 (double)로 캐스팅 후 round
    int res = round((double)sum / n);
    // C++ round는 -0.3을 -0으로 만들 수 있음. 0으로 강제 변환
    if (res == -0) return 0;
    return res;
}

// 2. 중앙값: 이미 정렬되어 있으므로 간단
int get_median(const vector<int>& arr) {
    return arr[arr.size() / 2];
}

// 3. 최빈값: "한 칸씩 가며 실시간 갱신" 방식 (가장 안전)
int get_mode(int n, const vector<int>& arr) {
    if (n == 1) return arr[0];

    int max_freq = 0;
    int mode = 0;
    int cur_cnt = 0;
    bool is_second = false;

    for (int i = 0; i < n; i++) {
        // 현재 숫자가 이전 숫자와 같으면 카운트 증가
        if (i > 0 && arr[i] == arr[i - 1]) {
            cur_cnt++;
        }
        else {
            cur_cnt = 1;
        }

        // 현재 카운트가 지금까지의 최대 빈도보다 크면 갈아치우기
        if (cur_cnt > max_freq) {
            max_freq = cur_cnt;
            mode = arr[i];
            is_second = false; // 새로운 1등이 왔으니 '두 번째' 플래그 리셋
        }
        // 빈도가 같은데 아직 '두 번째'를 안 골랐다면?
        else if (cur_cnt == max_freq && !is_second) {
            // mode가 현재 값과 다를 때만(즉, 새로운 숫자의 그룹일 때만) 갱신
            if (mode != arr[i]) {
                mode = arr[i];
                is_second = true;
            }
        }
    }
    return mode;
}

// 4. 범위
int get_range(const vector<int>& arr) {
    return arr.back() - arr.front();
}

int main() {
    // 입출력 가속 (현업에서도 대량 데이터엔 필수죠 ㅋ)
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    long long sum = 0; // 50만 * 4000은 int 범위를 넘을 수 있음
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // 정렬을 한 번만 수행
    sort(arr.begin(), arr.end());

    cout << get_avg(n, sum) << "\n";
    cout << get_median(arr) << "\n";
    cout << get_mode(n, arr) << "\n";
    cout << get_range(arr) << "\n";

    return 0;
}