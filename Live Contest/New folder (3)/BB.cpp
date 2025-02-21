// MH_Nazmul
// Let it be as simple

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define nl cout << "\n"
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define f(a, b, c) for (int a = b; a < c; a++)
#define cin(vec, n) \
    f(i, 0, n) { cin >> vec[i]; }
#define int long long
const int N = 2e5 + 10;
const int M = 1e9 + 7;

void solve(void)
{
    int n;
    cin >> n;
    vector<int> v(n), z(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    z = v;
    sort(all(z));
    z.erase(unique(all(z)), z.end());
    int dstnk = z.size();
    int left = 0, right = 0, cnt = 0, l = 0, r = 0, ans = 1, tmp = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]] == 1)
        {
            cnt++;
            if (cnt == 1)
                l = i;
            if (i == n - 1 and cnt >= ans)
            {
                tmp = cnt;
                left = l + 1;
                right = i + 1;
                cnt = 0;
            }
        }
        else
        {
            if (cnt >= ans)
            {
                ans = cnt;
                left = l + 1;
                right = i;
                cnt = 0;
            }
            cnt=0;
        }
    }
    if (left == 0 and right == 0)
    {
        cout << 0;
    }
    else
        cout << left << " " << right;
    nl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}