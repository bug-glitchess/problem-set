#include <bits/stdc++.h>
using namespace std;

const long long M = 1000000007;

long long pw(long long a, long long b) {
    if (b == 0) return 1;
    long long h = pw(a, b / 2);
    h = h * h % M;
    if (b & 1) h = h * a % M;
    return h;
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << pw(a % M, b) << "\n";
    return 0;
}
