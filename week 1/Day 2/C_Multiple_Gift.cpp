#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x,y;
    cin >> x >> y;

    ll cnt = 0;

    ll val = x;
    while(1)
    {
        if(val > y)break;

        cnt++;
        val = val * 2;
    }

    cout << cnt << '\n';

    return 0;
}