#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    long long k;
    cin >> s >> k;
    k %= 26;
    for (char &c : s) c = char((c - 'a' + k) % 26 + 'a');
    cout << s << "\n";
    return 0;
}
