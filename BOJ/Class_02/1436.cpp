#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    int cur = 666;
    int six_check = 0;
    string str_n = to_string(cur);
    cin >> n;

    while(true)
    {
        for(char x: str_n)
        {
            if(x == '6')
            {
                six_check +=1;
            }
            if(x != '6' && six_check < 3)
            {
                six_check = 0;
            } 
        }

        if(six_check >= 3)
        {
            n -=1;
            if(n == 0) break;
        }

        cur ++;
        str_n = to_string(cur);
        six_check = 0;


    }

    cout << cur; 


}