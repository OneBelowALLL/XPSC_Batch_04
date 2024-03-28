//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define ll              long long
#define pb              push_back
#define FlashIO()       (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

bool ispalindrome(vector<int> &arr)
{
    int i = 0, j = arr.size() - 1;
    while(i < j)
    {
        if(arr[i] != arr[j])
        {
            return false;
        }
        i++; j--;
    }
    return true;
}

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
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        bool flag = true;
        int i = 0, j = n - 1;
        int value1,value2;
        while(i < j)
        {
            if(arr[i] != arr[j])
            {
                value1 = arr[i];
                value2 = arr[j];
                flag = false;
                break;
            }
            i++; j--;
        }
        if(flag) cout << "YES" << '\n';
        else 
        {
            vector<int> v1,v2;
            for(int i=0; i<n; i++)
            {
                if(arr[i] != value1) v1.pb(arr[i]);
                if(arr[i] != value2) v2.pb(arr[i]);
            }

            if(ispalindrome(v1) || ispalindrome(v2)) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }

    return 0;
}
