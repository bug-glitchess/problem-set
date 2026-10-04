#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    k %= n;
    for (int i = 0; i < n; i++) cout << a[(i + k) % n] << (i + 1 < n ? " " : "\n");
    return 0;
}
