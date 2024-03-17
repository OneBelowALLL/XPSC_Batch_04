#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    cin.ignore();

    while (t--)
    {
        int n;
        cin >> n;

        string str[3][n];
        map<string, int> mp;

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> str[i][j];
                mp[str[i][j]]++;
            }
        }

        int cnt1 = 0,cnt2 = 0,cnt3 = 0;
        for(int i=0; i<n; i++)
        {
            if(mp[str[0][i]] == 1)
            {
                cnt1 += 3;
            }
            else if(mp[str[0][i]] == 2)
            {
                cnt1 += 1;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(mp[str[1][i]] == 1)
            {
                cnt2 += 3;
            }
            else if(mp[str[1][i]] == 2)
            {
                cnt2 += 1;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(mp[str[2][i]] == 1)
            {
                cnt3 += 3;
            }
            else if(mp[str[2][i]] == 2)
            {
                cnt3 += 1;
            }
        }

        cout << cnt1 << " " << cnt2 << ' ' << cnt3 << '\n';
    }

    return 0;
}