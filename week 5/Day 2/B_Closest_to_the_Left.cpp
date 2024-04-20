//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define ll              long long
#define FlashIO()       (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int binary_src(vector<int> arr,int n,int key)
{
    int ans = -1;

    int l = 0, r = n - 1; ll mid = (1LL + l + r) / 2;

    while(l <= r)
    {
        if(key >= arr[mid])
        {
            ans = mid;
            l = mid + 1;
        }
        else 
        {
            r = mid - 1;
        }

        mid = (1LL + l + r) / 2;
    }
}

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

        int l = 0, r = n -1,mid, ans = -1;

        mid = (l + r) / 2;
        while(l <= r)
        {
            if(key >= arr[mid])
            {
                ans = mid; l = mid + 1;
            }
            else 
            {
                r = mid - 1;
            }

            mid = (l + r) / 2;
        }

        cout << ans + 1 << '\n';
    }

    return 0;
}
