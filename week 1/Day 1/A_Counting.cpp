#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;

    int cnt = 0;
    for(int i=a; i<=b; i++)
    {
        cnt++;
    }

    cout << cnt << '\n';

    return 0;
}