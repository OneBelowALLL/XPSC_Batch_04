#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin >> x >> y;

    ll cnt = 0;
    for(int i=0; i<=x; i++)
    {
        for(int j=0; j<=x; j++)
        {
            for(int k=0; k<=x; k++)
            {
                if((i+j+k) <= x && (i*j*k) <= y)
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}