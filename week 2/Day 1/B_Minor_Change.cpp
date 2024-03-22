#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str1,str2;
    cin >> str1 >> str2;

    int cnt = 0;
    for(int i=0; i<str1.size(); ++i)
    {
        if(str1[i] != str2[i])
        {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}