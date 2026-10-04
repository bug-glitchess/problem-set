#include <bits/stdc++.h>
using namespace std;

long long power(long long a, int b) {
    long long r = 1;
    for (int i = 0; i < b; i++) r *= a;
    return r;
}

int main() {
    long long a;
    int b;
    cin >> a >> b;
    cout << power(a, b) << "\n";
    return 0;
}
