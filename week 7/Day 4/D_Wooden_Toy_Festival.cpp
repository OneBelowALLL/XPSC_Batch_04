//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define endll           "\n"
#define ll              long long
#define FlashIO         (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    FlashIO
    
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];

        sort(arr.begin(),arr.end());

        auto ok = [&](int mid)
        {
            int l = 0 , cnt = 1;
            for(int j = 0; j<n; j++)
            {
                if((arr[j] - arr[l]) > (2 * mid))
                {
                    cnt++; l = j;
                }
            }

            return cnt <= 3;
        };

        ll l = 0, r = 1000000000, mid , ans = 0;
        while(l <= r)
        {
            mid = (l + r) / 2;
            if(ok(mid))
            {
                ans = mid; r = mid - 1;
            }
            else 
            {
                l = mid + 1;
            }
        }

        cout << ans << endll;
    }

    return 0;
}
