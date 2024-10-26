// MD.Rasheduzzaman Imran
// Alhamdulillah for everything

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n, k;
        cin >> n >> k;  
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];  
        }

        sort(a.rbegin(), a.rend()); 

        long long score = 0;
        int rem = k;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                score += a[i];  
            } else {
                int needed = min(rem, a[i - 1] - a[i]);
                a[i] += needed;  
                rem -= needed;
                score -= a[i];  
            }
        }
        cout << score << '\n';
    }

    return 0;
}
