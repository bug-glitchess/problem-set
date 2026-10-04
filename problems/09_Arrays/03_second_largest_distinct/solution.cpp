#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    int m1 = *max_element(a.begin(), a.end());
    bool found = false;
    int m2 = 0;
    for (int x : a) {
        if (x < m1 && (!found || x > m2)) {
            m2 = x;
            found = true;
        }
    }
    if (found) cout << m2 << "\n";
    else cout << "NONE\n";
    return 0;
}
