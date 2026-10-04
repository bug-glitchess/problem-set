#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, m;
    cin >> a >> b >> m;
    long long r = 1 % m;
    a %= m;
    while (b > 0) {
        if (b & 1) r = r * a % m;
        a = a * a % m;
        b >>= 1;
    }
    cout << r << "\n";
    return 0;
}
