#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        bool flag = true;
        map<long long int, long long int> mp;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }

        for (auto x : mp)
        {
            auto j = mp.rbegin();

            if (j->second == 2)
            {
                cout << "-1\n";
                flag = false;
                break;
            }
            else if (x.second > 2)
            {
                cout << "-1\n";
                flag = false;
                break;
            }
        }

        if (flag == true)
        {
            for (auto x : mp)
            {
                if (x.second == 2)
                {
                    cout << x.first << " ";
                }
            }

            for (auto k = mp.rbegin(); k != mp.rend(); k++)
            {
                cout << k->first << " ";
            }
            cout << endl;
        }
    }
    return 0;
}