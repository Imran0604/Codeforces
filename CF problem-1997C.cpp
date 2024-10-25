//MD.Rasheduzzaman Imran
//Alhamdulillah for everything

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;  
        string s;
        cin >> s;  

        long long ans = 0;
        deque<int> bracketPositions;  
        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (c == '_') {
                c = bracketPositions.empty() ? '(' : ')';  
            }
            if (c == ')') {
                ans += i - bracketPositions.back();  
                bracketPositions.pop_back();  
            } else {
                bracketPositions.push_back(i);  
            }
        }
        cout << ans << '\n';  
    }

    return 0;
}
