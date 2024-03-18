#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n+1);
        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
        }

        ll k = 1, cnt = 0;
        for(int i=1; i<=n; i++)
        {
            if(arr[i] <= k)
            {
                k++;
            }
            else 
            {
                int value = arr[i] - k;
                cnt += value;
                k += value;
                k++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}