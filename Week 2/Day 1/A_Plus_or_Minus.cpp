#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,t;
    cin >> t;

    while(t--)
    {
        cin >> a >> b >> c;

        if(a+b == c)
        {
            cout << '+' << '\n';
        }
        else 
        {
            cout << '-' << '\n';
        }
    }

    return 0;
}