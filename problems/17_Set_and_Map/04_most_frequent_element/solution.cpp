#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    int bv = 0, bc = 0;
    for (auto &p : m) {
        if (p.second > bc) {
            bc = p.second;
            bv = p.first;
        }
    }
    cout << bv << " " << bc << "\n";
    return 0;
}
