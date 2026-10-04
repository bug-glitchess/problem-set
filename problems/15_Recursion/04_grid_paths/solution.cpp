#include <bits/stdc++.h>
using namespace std;

long long memo[16][16];

long long paths(int r, int c) {
    if (r == 1 || c == 1) return 1;
    if (memo[r][c]) return memo[r][c];
    return memo[r][c] = paths(r - 1, c) + paths(r, c - 1);
}

int main() {
    int r, c;
    cin >> r >> c;
    cout << paths(r, c) << "\n";
    return 0;
}
