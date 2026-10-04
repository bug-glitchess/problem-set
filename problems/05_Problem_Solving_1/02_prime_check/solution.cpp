#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    bool ok = n >= 2;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << "\n";
    return 0;
}
