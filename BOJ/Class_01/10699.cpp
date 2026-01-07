#include <ctime>
#include <iostream>
using namespace std;

int main() {
    time_t t = time(NULL);
    struct tm *t_info = gmtime(&t); // UTC 기준
    
    // YYYY-MM-DD 형식으로 출력 (C++의 출력 포맷 설정)
    printf("%d-%02d-%02d\n", t_info->tm_year + 1900, t_info->tm_mon + 1, t_info->tm_mday);
}