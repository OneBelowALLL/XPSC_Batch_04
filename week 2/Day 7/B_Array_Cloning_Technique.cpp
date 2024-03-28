//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define ll              long long
#define pb              push_back
#define FlashIO()       (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    FlashIO();
    
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        int maxy = 0;
        for(auto it : mp)
        {
            maxy = max(maxy,it.second);
        }

        int ans = 0;
        while(maxy < n)
        {
            int tmp = min(n - maxy,maxy);
            ans += 1 + tmp;
            maxy += tmp;
        }
        cout << ans << '\n';
    }


    return 0;
}
