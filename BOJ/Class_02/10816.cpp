#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1. target이 처음 나타나는 위치 (Lower Bound)
int lowerBound(vector<int>& arr, int target, int start, int end) {
    if (start >= end) return start;
    int mid = start + (end - start) / 2;

    // 찾으려는 값보다 크거나 같으면 왼쪽으로 범위를 좁힘 (처음 위치를 찾으려고)
    if (arr[mid] >= target) return lowerBound(arr, target, start, mid);
    else return lowerBound(arr, target, mid + 1, end);
}

// 2. target보다 큰 값이 처음 나타나는 위치 (Upper Bound)
int upperBound(vector<int>& arr, int target, int start, int end) {
    if (start >= end) return start;
    int mid = start + (end - start) / 2;

    // 찾으려는 값보다 클 때만 왼쪽으로 좁힘 (더 큰 값의 시작점을 찾으려고)
    if (arr[mid] > target) return upperBound(arr, target, start, mid);
    else return upperBound(arr, target, mid + 1, end);
}

int main() {
    // Fast I/O (이건 필수!)
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    
    // 1. 첫 번째 배열 입력 및 정렬
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    // 2. 찾을 숫자들 입력 및 탐색
    cin >> m;
    for (int i = 0; i < m; i++) {
        int target;
        cin >> target;
        
        // 개수 = 끝 지점 - 시작 지점
        int lb = lowerBound(arr, target, 0, n);
        int ub = upperBound(arr, target, 0, n);
        
        cout << ub - lb << " ";
    }

    return 0;
}