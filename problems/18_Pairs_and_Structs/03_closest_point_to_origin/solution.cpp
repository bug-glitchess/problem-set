#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

int main() {
    int n;
    cin >> n;
    Point best{0, 0};
    long long bd = -1;
    for (int i = 0; i < n; i++) {
        Point p;
        cin >> p.x >> p.y;
        long long d = 1LL * p.x * p.x + 1LL * p.y * p.y;
        if (bd < 0 || d < bd) {
            bd = d;
            best = p;
        }
    }
    cout << best.x << " " << best.y << "\n";
    return 0;
}
