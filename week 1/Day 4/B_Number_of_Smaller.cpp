#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    vector<int> a(n),b(m),c(m);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }

    int k=0;
    for(int i=0; i<m; i++)
    {
        while(k < n && a[k] < b[i])
        {
            k++;
        }

        c[i] = k;
    }

    for(int val : c)
    {
        cout << val << ' ';
    }
    cout << '\n';

    return 0;
}