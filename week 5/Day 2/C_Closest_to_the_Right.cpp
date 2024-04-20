//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define ll              long long
#define FlashIO()       (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    FlashIO();
    
    int n,q;
    cin >> n >> q;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    while(q--)
    {
        int key;
        cin >> key;

        int l = 0, r = n - 1, mid, ans = n;
        mid = (l + r) / 2;

        while(l <= r)
        {
            if(key <= arr[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else 
            {
                l = mid + 1;
            }

            mid = (l + r) / 2;
        }

        cout << ans + 1 << '\n';
    }

    return 0;
}
