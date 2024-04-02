//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define ll              long long
#define FlashIO()       (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    FlashIO();
    
    int t;
    cin >> t;

    while(t--)
    {
        int n,q;
        cin >> n >> q;

        vector<ll> arr(n+2);
        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
        }
        for(int i=1; i<=n; i++)
        {
            if(i != 1)
            {
                arr[i] = arr[i] + arr[i-1];
            }
        }

        while(q--)
        {
            ll l,r,k;
            cin >> l >> r >> k;

            ll sum = arr[n] - (arr[r] - arr[l-1]);
            ll value = k * (r - l + 1);
            sum += value;

            // cout << sum << endl;

            if(sum % 2 == 1)
            {
                cout << "YES" << '\n';
            }
            else 
            {
                cout << "NO" << '\n';
            }
        }
        
    }

    return 0;
}
