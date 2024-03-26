#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        cin >> n >> m;

        vector<string> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        
        int minDiff = INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                string str1 = arr[i],str2 = arr[j];
                int value = 0;
                for(int k=0; k<m; k++)
                {
                    if(str1[k] > str2[k])
                    {
                        int v = str1[k] - str2[k];
                        value += v;
                    }
                    else
                    {
                        int v = str2[k] - str1[k];
                        value += v;
                    }
                }

                minDiff = min(minDiff,value);
            }
        }
        cout << minDiff << '\n';
    }

    return 0;
}