#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n), res;
    for (auto &p : v) cin >> p.first >> p.second;
    sort(v.begin(), v.end());
    for (auto &p : v) {
        if (!res.empty() && p.first <= res.back().second)
            res.back().second = max(res.back().second, p.second);
        else
            res.push_back(p);
    }
    cout << res.size() << "\n";
    for (auto &p : res) cout << p.first << " " << p.second << "\n";
    return 0;
}
