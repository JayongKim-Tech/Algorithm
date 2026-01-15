#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string res;
    vector <char> arr;
    int sum =0;
    int cur = 1;
    int index = 0;
    int x_res = 0;

    cin >> res;

    for(char x:res)
    {
        index ++;
        if(x == '*')
        {
            x_res = 1*cur;
        }
        else if(index == 13) sum += (x-'0');
        else sum += (x-'0') * cur;
        
        if(cur == 3) cur =1;
        else cur = 3; 
    }

    for (int i = 0; i <= 9; i++) {
            if ((sum + (i * x_res)) % 10 == 0) {
                cout << i << "\n"; 
                break;            
            }
        }


    

}