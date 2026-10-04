#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int c = 0;
    do {
        c++;
        n /= 10;
    } while (n > 0);
    cout << c << "\n";
    return 0;
}
