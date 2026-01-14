#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


struct MyData 
{
    int age;             // 숫자 자료형
    string name;        // 문자열 자료형
    int index; // 실수 자료형
};

bool compare(MyData a, MyData b)
{
    if(a.age != b.age) return a.age < b.age;
    else return a.index < b.index;
}

int main()
{
    int n;
    int age;
    string name;

    cin >> n;

    vector<MyData> arr(n);


    for(int i =0; i < n; i++)
    {
        cin >> age;
        cin >> name;

        arr[i].age = age;
        arr[i].name = name;
        arr[i].index = i;
        
    }

    sort(arr.begin(), arr.end(), compare);

    for (MyData x : arr) cout << x.age << " " << x.name << "\n";

}
