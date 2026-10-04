#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n == 0) {
        cout << "0\n";
        return 0;
    }
    string s;
    while (n > 0) {
        s += char('0' + n % 2);
        n /= 2;
    }
    reverse(s.begin(), s.end());
    cout << s << "\n";
    return 0;
}
