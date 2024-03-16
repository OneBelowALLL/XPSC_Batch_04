#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin >> a >> b >> c;

    bool flag = false;

    int val = c;
    while(val <= b)
    {
        if(val >= a && val <= b)
        {
            flag = true;
            break;
        }

        val = val + c;
    }

    if(flag)
    {
        cout << val << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}