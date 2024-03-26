#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll s;
    cin >> n >> s;

    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0, l = 0, r = 0;
    ll sum = 0;

    while(r < n)
    {
        sum += arr[r];

        if(sum <= s)
        {
            ans = max(ans,r-l+1);
        }
        else 
        {
            sum -= arr[l];
            l++;
        }

        r++;
    }
    cout << ans << '\n';

    return 0;
}