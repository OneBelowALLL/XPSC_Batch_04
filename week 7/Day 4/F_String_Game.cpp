//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define endll           "\n"
#define ll              long long
#define FlashIO         (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    FlashIO
    
    string str,str2;
    cin >> str >> str2;
    int n = str.size() , m = str2.size();

    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    auto ok = [&](int mid) 
    {
        vector<bool> bad(n + 1);
        for(int i=0; i<mid; i++)
        {
            bad[arr[i]] = true;
        }
        int j=0; 
        bool f = false;
        for(int i=0; i<n; i++)
        {
            if(str[i] == str2[j] && !bad[i + 1])
            {
                j++;
            }
            if(j == m)
            {
                f = true;
                break;
            }
        }
        return f;
    };

    int l=0, r = n, mid ,ans = 0;
    while(l <= r)
    {
        mid = (l + r) / 2;
        if(ok(mid))
        {
            ans = mid; l = mid + 1;
        }
        else 
        {
            r = mid - 1;
        }
    }

    cout << ans << endll;

    return 0;
}
