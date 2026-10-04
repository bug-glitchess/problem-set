#include <bits/stdc++.h>
using namespace std;

void sort3(long long &a, long long &b, long long &c) {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
}

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    sort3(a, b, c);
    cout << a << " " << b << " " << c << "\n";
    return 0;
}
