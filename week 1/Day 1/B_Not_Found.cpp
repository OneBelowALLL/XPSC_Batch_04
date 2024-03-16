#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int frq[26] = {0};
    for(char ch : str)
    {
        int val = ch - 'a';
        frq[val]++;
    }

    bool flag = false;
    int val;
    for(int i=0; i<26; i++)
    {
        if(frq[i] == 0)
        {
            flag = true;
            val = i;
            break;
        }
    }

    if(flag)
    {
        char ch = 'a' + val;
        cout << ch << '\n';
    }
    else 
    {
        cout << "None" << '\n';
    }

    return 0;
}