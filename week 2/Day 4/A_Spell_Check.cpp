#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string str = "Timur";
    sort(str.begin(),str.end());

    while(t--)
    {
        int n;
        cin >> n;
        string str2;
        cin >> str2;

        if(n != 5)
        {
            cout << "NO" << '\n';continue;
        }

        sort(str2.begin(),str2.end());

        // cout << str << ' ' << str2 << endl;

        if(str == str2) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}