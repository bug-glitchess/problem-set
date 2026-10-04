#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c;
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    int i = 0, j = 0;
    while (i < n || j < m) {
        if (j == m || (i < n && a[i] <= b[j])) c.push_back(a[i++]);
        else c.push_back(b[j++]);
    }
    for (size_t t = 0; t < c.size(); t++) cout << c[t] << (t + 1 < c.size() ? " " : "\n");
    return 0;
}
