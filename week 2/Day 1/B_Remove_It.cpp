#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;

    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int val;
        cin >> val;

        if(val != k)
        {
            arr.push_back(val);
        }
    }

    for(int val : arr)
    {
        cout << val << ' ';
    }
    cout << '\n';

    return 0;
}