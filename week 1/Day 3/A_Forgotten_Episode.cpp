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
    int frq[n+1] = {0};

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        frq[arr[i]]++;
    }

    for(int i=1; i<=n; i++)
    {
        if(frq[i] == 0)
        {
            cout << i << '\n';
        }
    }

    return 0;
}