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
        int n,k;
        cin >> n >> k;

        auto ok = [&] (int mid)
        {
            return (mid - (mid / n)) >= k;
        };

        ll l = 1 , r=2000000000,mid,ans = 0; 
        while(l <= r)
        {
            mid = (l + r) / 2;
            if(ok(mid))
            {
                ans = mid ; r = mid - 1;
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
