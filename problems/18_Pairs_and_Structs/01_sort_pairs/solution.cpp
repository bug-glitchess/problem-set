#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &p : v) cin >> p.first >> p.second;
    sort(v.begin(), v.end(), [](const pair<int, int> &x, const pair<int, int> &y) {
        if (x.first != y.first) return x.first < y.first;
        return x.second > y.second;
    });
    for (auto &p : v) cout << p.first << " " << p.second << "\n";
    return 0;
}
