#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

        sum += arr[i];
    }

    if(sum % 2 == 0)
    {
        cout << sum << '\n';
    }
    else 
    {
        sort(arr.begin(),arr.end());
        for(int i=0; i<n; i++)
        {
            if(arr[i] % 2 != 0)
            {
                sum -= arr[i];
                break;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}