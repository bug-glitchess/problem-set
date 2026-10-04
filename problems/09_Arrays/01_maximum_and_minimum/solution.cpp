#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    cout << *max_element(a.begin(), a.end()) << " " << *min_element(a.begin(), a.end()) << "\n";
    return 0;
}
