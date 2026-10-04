#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    const long long M = 1000000007;
    long long f = 1;
    for (int i = 2; i <= n; i++) f = f * i % M;
    cout << f << "\n";
    return 0;
}
