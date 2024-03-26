#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n; 

        string str1,str2;
        cin >> str1 >> str2;

        bool flag = true;
        for(int i=0; i<n; i++)
        {
            if(str1[i] == 'R')
            {
                if(str2[i] == 'B' || str2[i] == 'G') flag = false;
            }
            if(str2[i] == 'R')
            {
                if(str1[i] == 'B' || str1[i] == 'G') flag = false;
            }
        }

        if(flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}