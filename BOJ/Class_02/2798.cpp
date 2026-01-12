    #include <iostream>
    #include <vector>
    using namespace std;

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int n,m;
        int sum = 0;
        int check = 300000;

        cin >> n >> m;
        vector <int> arr(n);


        for(int i = 0; i< n; i++) cin >> arr[i];

        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            for(int j = i+1; j < n; j++)
            {
                sum += arr[j];
                for(int x = j+1; x<n; x++)
                {
                    sum += arr[x];
                    if(m-sum < check && m-sum >= 0) check = m-sum;
                    sum -= arr[x];
                }
                sum -=arr[j];
            }
            sum -= arr[i];
        }
        cout << m - check;
    }