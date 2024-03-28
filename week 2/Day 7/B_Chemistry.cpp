//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define ll              long long
#define pb              push_back
#define FlashIO()       (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    FlashIO();
    
    int t;
    cin >> t;

    while(t--)
    {
        int n,k;
        cin >> n >> k;

        string str;
        cin >> str;

        map<char,int> mp;
        for(char ch : str)
        {
            mp[ch]++;
        }
        int odd = 0;
        for(auto it : mp)
        {
            if(it.second % 2 == 1) odd++;
        }

        if(k < odd - 1)
        {
            cout << "NO" << '\n';
        }
        else 
        {
            cout << "YES" << '\n';
        }
    }

    return 0;
}
