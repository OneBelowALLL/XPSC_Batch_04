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
        int n;
        cin >> n;

        vector<int> arr(n);
        set<int> hello;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            hello.insert(arr[i]);
        }
        
        int v = n - hello.size();
        if(v % 2 == 0)
        {
            cout << n - v << '\n';
        }
        else 
        {
            cout << n - (v + 1) << '\n';
        }

    }

    return 0;
}
