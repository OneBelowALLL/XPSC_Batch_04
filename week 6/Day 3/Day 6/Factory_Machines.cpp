// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#define endll "\n"
#define ll long long
#define FlashIO (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

// bool valid(ll x,vector<int> arr,int n,int T)
// {
//     ll t = 0;
//     for(int i=0; i<n; i++)
//     {
//         t += (x / arr[i]);
//         if(t >= T)
//         {
//             return true;
//         }
//     }

//     return false;
// }

int main()
{
    FlashIO

        int n,
        t;
    cin >> n >> t;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    auto valid = [&](ll mid)
    {
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            total += (mid / arr[i]);
            if (total >= t)
                return true;
        }
        return false;
    };

    ll l = 1, r = 1e18, mid ,ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (valid(mid))
            ans = mid, r = mid - 1;
        else
            l = mid + 1;
    }

    cout << ans << '\n';

    return 0;
}
