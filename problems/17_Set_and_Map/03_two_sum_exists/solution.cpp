#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;
    unordered_set<long long> seen;
    bool ok = false;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (seen.count(t - x)) ok = true;
        seen.insert(x);
    }
    cout << (ok ? "YES" : "NO") << "\n";
    return 0;
}
