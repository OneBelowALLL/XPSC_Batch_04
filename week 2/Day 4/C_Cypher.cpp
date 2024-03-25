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
        int n;
        cin >> n;

        vector<int> arr(n+1);
        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
        }

        string str;
        for(int i=1; i<=n; i++)
        {
            int k;
            cin >> k;

            cin >> str;

            for(char ch : str)
            {
                if(ch == 'D')
                {
                    if(arr[i] == 9)
                    {
                        arr[i] = 0;
                    }
                    else 
                    {
                        arr[i]++;
                    }
                }
                else 
                {
                    if(arr[i] == 0)
                    {
                        arr[i] = 9;
                    }
                    else 
                    {
                        arr[i]--;
                    }
                }
            }
        }

        for(int i=1; i<=n; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';

    }

    return 0;
}