#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> res;
    set<int> seen;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (seen.insert(x).second) res.push_back(x);
    }
    for (size_t i = 0; i < res.size(); i++) cout << res[i] << (i + 1 < res.size() ? " " : "\n");
    return 0;
}
