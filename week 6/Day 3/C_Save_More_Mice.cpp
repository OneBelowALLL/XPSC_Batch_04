//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
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
        ll n;
        int k;
        cin >> n >> k;

        vector<ll> arr(k);

        for(int i=0; i<k; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());

        ll cnt = 0, c = 0;
        while(c < arr[k-1])
        {
            c += (n - arr[k-1]);
            cnt++;
            arr.erase(arr.end() - 1);
            k--;
            if(k == 0 || arr.empty()) 
            {
                break;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
