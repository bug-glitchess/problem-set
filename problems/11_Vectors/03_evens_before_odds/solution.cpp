#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ev, od;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) ev.push_back(x);
        else od.push_back(x);
    }
    ev.insert(ev.end(), od.begin(), od.end());
    for (int i = 0; i < n; i++) cout << ev[i] << (i + 1 < n ? " " : "\n");
    return 0;
}
