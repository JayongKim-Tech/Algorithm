 #include <iostream>
 #include <string>

 using namespace std;

long get_res(long a, long b)
{
    return (a+b)*(a-b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long a, b;
    long res;

    cin  >> a >> b;

    res = get_res(a,b);

    cout << res;

}
