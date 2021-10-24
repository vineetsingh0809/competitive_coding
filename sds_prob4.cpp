#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k, ans1 = 0, ans2 = 0, dist2, dist1;
        ll mid = INT_MAX;

        cin >> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        ll left = 1, right = n - 2;

        if (n == 2)
        {
            cout << 0 << endl;
            continue;
        }
        else if (n == 3)
        {
            cout << min(a[1] - a[0], a[2] - a[1]) << endl;
            continue;
        }
        for (ll i = 0; i < n - 1; i++)
        {
            ans1 += abs(a[i] - a[(n - 1) / 2]);
        }
        for (ll i = 1; i < n; i++)
        {
            ans2 += abs(a[i] - a[1 + (n - 1) / 2]);
        }

        mid = min(ans1, ans2);

        while (left < right)
        {
            dist2 = a[n - 1] - a[left];
            dist1 = a[right] - a[0];
            mid = min(mid, abs(dist1 - dist2));
            if (dist1 < dist2)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        cout << mid << endl;
        ;
    }
    return 0;
}