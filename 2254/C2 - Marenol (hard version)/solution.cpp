#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string a, b;
 
        cin >> n;
        cin >> a >> b;
 
        vector<int> oddA, evenA;
        vector<int> oddB, evenB;
 
        // Store 1-based positions
        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                int pos = i + 1;
 
                if (pos % 2)
                    oddA.push_back(pos);
                else
                    evenA.push_back(pos);
            }
 
            if (b[i] == '1') {
                int pos = i + 1;
 
                if (pos % 2)
                    oddB.push_back(pos);
                else
                    evenB.push_back(pos);
            }
        }
 
        // Parity counts must be equal
        if (oddA.size() != oddB.size() ||
            evenA.size() != evenB.size()) {
            cout << -1 << '
';
            continue;
        }
 
        long long ans = 0;
 
        // Match odd positions
        for (int i = 0; i < oddA.size(); i++) {
            ans += abs(oddA[i] - oddB[i]) / 2;
        }
 
        // Match even positions
        for (int i = 0; i < evenA.size(); i++) {
            ans += abs(evenA[i] - evenB[i]) / 2;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}