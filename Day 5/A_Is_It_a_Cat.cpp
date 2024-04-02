//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define ll              long long
#define FlashIO()       (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    FlashIO();
    
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        for(int i=0; i<n; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }
        str.erase(unique(str.begin(),str.end()),str.end());
        if(str == "meow")
        {
            cout << "YES" << '\n';
        }
        else 
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
