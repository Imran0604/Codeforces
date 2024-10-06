// MD.Rasheduzzaman Imran
// Alhamdulillah for everything

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> cnt(k + 1);
    for (int e : a) {
        if (e <= k) {
            cnt[e] |= 1;
        }
    }
    for (int e : b) {
        if (e <= k) {
            cnt[e] |= 2;
        }
    }

    vector<int> c(4);
    for (int e : cnt) {
        c[e]++;
    }

    if (c[1] > k / 2 || c[2] > k / 2 || c[1] + c[2] + c[3] != k) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
