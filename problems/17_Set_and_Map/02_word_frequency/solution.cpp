#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++) {
        string w;
        cin >> w;
        m[w]++;
    }
    for (auto &p : m) cout << p.first << " " << p.second << "\n";
    return 0;
}
