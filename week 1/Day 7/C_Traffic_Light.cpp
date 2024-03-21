#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char ch;
        string str;
        cin >> n >> ch >> str;
        str += str;
        int cnt = 0, maxy = 0, flag = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ch)
                flag = 1;
            if (str[i] == 'g')
            {
                flag = 0;
                maxy = max(maxy,cnt);
                cnt = 0;
            }
            if (flag == 1)
                cnt++;
        }
        cout << maxy << endl;
    }

    return 0;
}