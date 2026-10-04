#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    queue<long long> d;
    while (q--) {
        string c;
        cin >> c;
        if (c == "push") {
            long long x;
            cin >> x;
            d.push(x);
        } else if (c == "pop") {
            if (d.empty()) cout << "EMPTY\n";
            else {
                cout << d.front() << "\n";
                d.pop();
            }
        } else if (c == "front") {
            if (d.empty()) cout << "EMPTY\n";
            else cout << d.front() << "\n";
        } else {
            cout << d.size() << "\n";
        }
    }
    return 0;
}
