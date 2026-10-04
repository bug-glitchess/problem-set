#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        int lo = 0, hi = n - 1, ans = -1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (a[mid] == x) {
                ans = mid;
                break;
            }
            if (a[mid] < x) lo = mid + 1;
            else hi = mid - 1;
        }
        cout << ans << "\n";
    }
    return 0;
}
