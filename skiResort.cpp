#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll count = 0;
        ll ways = 0;

        for (ll i = 0; i < n; i++) {
            if (a[i] <= q) {
                count++;
            } else {
                if (count >= k) {
                    ways += ((count - k + 1) * (count - k + 2)) / 2;
                }
                count = 0;
            }
        }
        // Handle last segment
        if (count >= k) {
            ways += ((count - k + 1) * (count - k + 2)) / 2;
        }
        cout << ways << endl;
    }
    return 0;
}
