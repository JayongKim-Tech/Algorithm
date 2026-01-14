#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 파티션 함수: 기준에 맞춰 좌우로 나누기
int partition(vector<string> &arr, int start, int end) {
    // 1. 피벗을 중간값으로 정하고, 맨 뒤(end)랑 바꿔서 '고정'시키기
    int mid = (start + end) / 2;
    string pivotValue = arr[mid];
    swap(arr[mid], arr[end]); 

    int i = start; // 네 로직: 다음 작은 놈이 들어갈 빈칸

    for (int j = start; j < end; j++) {
        // 2. 비교 조건: 1순위 길이, 2순위 사전 순
        if (arr[j].length() < pivotValue.length() || 
           (arr[j].length() == pivotValue.length() && arr[j] < pivotValue)) {
            
            swap(arr[i], arr[j]);
            i++; // 넣고 나서 다음 칸으로 이동!
        }
    }

    // 3. 마지막에 피벗을 '작은 놈들 구역' 바로 다음인 i 자리에 꽂기
    swap(arr[i], arr[end]);
    return i; // 피벗의 최종 위치는 i가 됨
}

void quickSort(vector<string> &arr, int start, int end) {
    if (start < end) {
        int pi = partition(arr, start, end);
        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<string> arr;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // 퀵 정렬 실행
    quickSort(arr, 0, n - 1);

    // 4. 중복 제거하며 출력
    for (int i = 0; i < n; i++) {
        // 이전 단어와 같으면 출력 안 함
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        cout << arr[i] << "\n";
    }

    return 0;
}