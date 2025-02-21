#include "bits/stdc++.h"

using namespace std;

void solve () {
    int n;
    cin >> n;
    pair<int, int> ans = {0, -1};
    vector<int> a(n);
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    for (int i = 0; i < n; ) {
        if (cnt[a[i]] > 1) {
            i++;
        } else {
            int j = i;
            while (j < n && cnt[a[j]] == 1) {
                j++;
            }
            if (ans.second - ans.first < j - i - 1) {
                ans = {i, j - 1};
            }
            i = j;
        }
    }
    if (ans.second == -1) {
        cout << 0 << '\n';
    } else {
        cout << ans.first + 1 << " " << ans.second + 1 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
