//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define endll           "\n"
#define ll              long long
#define FlashIO         (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    FlashIO
    
    ll n,k;
    cin >> n >> k;

    vector<ll> divs;
    for(ll i = 1; i*i <=n; i++)
    {
        if(n % i == 0)
        {
            divs.push_back(i);
            if(n/i != i)
            {
                divs.push_back(n/i);
            }
        }
    }
    sort(divs.begin(),divs.end());

    k--;
    if(divs.size() <= k)
    {
        cout << -1 << endll;
    }
    else 
    {
        cout << divs[k] << endll;
    }

    return 0;
}
