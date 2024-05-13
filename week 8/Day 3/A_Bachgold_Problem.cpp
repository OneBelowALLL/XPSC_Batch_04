//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define endll           "\n"
#define ll              long long
#define FlashIO         (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    FlashIO
    
    int n;
    cin >> n;

    int cnt = 0;
    if(n % 2 == 1)
    {
        cout << n / 2 << endll;
        for(int i=0; i<(n/2)-1; i++)
        {
            cout << 2 << ' ';
        }
        cout << 3 << endll;
    }
    else 
    {
        cout << n / 2 << endll;
        for(int i=0; i<n/2; i++)
        {
            cout << 2 << ' ';
        }
        cout << endll;
    }

    return 0;
}
