#include <iostream>

using namespace std;


int main()
{
    int a;
    int b;

    cin >> a;
    cin >> b;


    if(a > b) cout << ">" ;
    else if(a < b) cout << "<";
    else cout << "==";
}