#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
        steps++;
    }
    cout << steps << "\n";
    return 0;
}
