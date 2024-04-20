//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define ll              long long
#define FlashIO()       (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

bool binary_src(vector<int> arr,int n,int key)
{
    int l = 0,r = n - 1; ll mid = (1LL + l + r) / 2;
    while(l <= r)
    {
        if(arr[mid] == key)
        {
            return true;
        }
        else if(arr[mid] < key)
        {
            l = mid + 1;
        }
        else 
        {
            r = mid - 1;
        }

        mid = (1LL + l + r) / 2;
    }
    return false;
}

int main()
{
    FlashIO();
    
    int n,q;
    cin >> n >> q;

    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    while(q--)
    {
        int key;
        cin >> key;

        if(binary_src(arr,n,key))
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
