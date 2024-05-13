//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define endll           "\n"
#define ll              long long
#define FlashIO         (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    FlashIO
    
    int t;
    cin >> t;

    while(t--)
    {
        int l,v1,v2;
        cin >> l >> v1 >> v2;

        int t1,t2;
        if(l % v1 == 0)
        {
            t1 = l / v1;
        }
        else 
        {
            t1 = (l / v1) + 1;
        }

        if(l % v2 == 0)
        {
            t2 = l / v2;
        }
        else 
        {
            t2 = (l / v2) + 1;
        }

        // cout << t1 << ' ' << t2 << endl;

        if(t1 - t2 >= 1)
        {
            cout << (t1 - t2) - 1 << endll;
        }
        else 
        {
            cout << -1 << endll;
        }
    }

    return 0;
}
