    #include <iostream>
    #include <vector>
    #include <deque>
    using namespace std;

    int main()
    {
        cin.tie(NULL);
        ios::sync_with_stdio(false);

        deque<char> check_arr;
        deque<string> result;

        int n;
        bool check_bool = true;

        cin >> n;

        deque<string> arr(n);

        for(int i =0; i< n; i++)
        {
            cin >> arr[i];
        }

        for(int i =0; i< n; i++)
        {
            for(char x : arr[i])
            {
                if(x == '(') check_arr.push_front(x);
                else if(check_arr.size()!=0 && x == ')') check_arr.pop_front();
                else check_bool = false;
            }
            if(check_bool && check_arr.size() == 0) result.push_back("YES");
            else result.push_back("NO");

            check_arr.clear();
            check_bool = true;
        }

        for(int i =0; i < result.size(); i++) cout << result[i] << "\n";




    

    }