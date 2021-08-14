#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j, k;
        int ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (j % i == 0)
                {
                    for (int k = i; k <= n; k += j)
                    {
                        if (k % j == i)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}