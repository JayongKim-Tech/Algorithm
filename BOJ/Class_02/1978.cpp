    #include <iostream>
    #include <cmath>
    using namespace std;

    void chae(int arr[], int n, int& cnt)
    {
        for (int i = 0; i < n; i++)
        {
            if(arr[i] < 2 ) arr[i] = false;
            else
            {
                for(int j=2; j*j <= arr[i]; j++)
                {
                    if(arr[i] % j == 0) arr[i] = 0;
                }
                if (arr[i] != 0) cnt++;
            }
        }
    }
    int  main()
    {
        cin.tie(NULL);
        ios::sync_with_stdio(false);

        int arr[100];
        int n;
        int cnt = 0;

        cin >> n;

        for(int i = 0; i < n; i++) cin >> arr[i];

        chae(arr, n, cnt);

        cout << cnt;

    }

