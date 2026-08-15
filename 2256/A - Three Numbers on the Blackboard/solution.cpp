#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
 
        vector<long long> v = {a, b, c};
 
        while (true) {
            sort(v.begin(), v.end());
 
            // If the largest is not greater than
            // the sum of the other two, we can make
            // the numbers equal.
            if (v[0] + v[1] >= v[2]) {
                break;
            }
 
            // Replace the largest by the sum of the other two.
            v[2] = v[0] + v[1];
        }
 
        sort(v.begin(), v.end());
 
        cout << v[2] - v[0] << '
';
    }
 
    return 0;
}