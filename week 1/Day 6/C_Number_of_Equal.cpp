#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    vector<int> a(n),b(m);
    map<ll,ll> mp;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    for(int j=0; j<m; j++)
    {
        cin >> b[j];

        ans = ans + (1 * mp[b[j]]);
    }

    cout << ans << '\n';

    return 0;
}