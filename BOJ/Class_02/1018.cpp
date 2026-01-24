    #include <iostream>
    #include <vector>
    using namespace std;

    int main()
    {
        cin.tie(NULL);
        ios::sync_with_stdio(false);

        int N,M;
        int w_cnt = 0;
        int b_cnt = 0;
        int res_cnt = 64;
        char cur;
        char _before = '-';
        bool white, black = false;
        string _input;
        cin >> N >> M;

        vector <string> arr(N);

        for(int i = 0; i< N; i++)
        {
            cin >> _input;
            arr[i] = _input;
        }

        for(int i =0; i <= N-8; i++)
        {
            for(int j = 0; j <= M-8; j++)
            {
                w_cnt = 0;
                for(int x = i; x <i+8; x++)
                {
                    for(int y = j; y < j+8; y++)
                    {
                        if((x+y) % 2 == 0 && arr[x][y] != 'W')
                        {
                            w_cnt++;
                        }
                        else if((x+y) % 2 == 1 && arr[x][y] != 'B')
                        {
                            w_cnt++;
                        }

                    }
                }
                b_cnt = 64- w_cnt ;
                if(b_cnt >= w_cnt && res_cnt > w_cnt) res_cnt = w_cnt;
                else if(b_cnt <= w_cnt && res_cnt > b_cnt )res_cnt = b_cnt;
            }
        }

        cout << res_cnt ;


    }