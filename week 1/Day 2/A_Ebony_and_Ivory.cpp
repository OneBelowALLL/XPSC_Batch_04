#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin >> a >> b >> c;

    bool flag = false;
    for(int i=0; ;i++)
    {
        for(int j=0; ;j++)
        {
            if((a*i) + (b*j) > c) break;
            if((a*i) + (b*j) == c)
            {
                flag = true;
                break;
            }
        }
        if(flag)break;
        if((a * i) > c)
        {
            break;
        }
    }

    if(flag)
    {
        cout << "Yes" << '\n';
    }
    else 
    {
        cout << "No" << '\n';
    }

    return 0;
}