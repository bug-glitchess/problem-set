#include <bits/stdc++.h>
using namespace std;

int sumProper(int n) {
    int s = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0) s += i;
    return s;
}

int main() {
    int n;
    cin >> n;
    vector<int> res;
    for (int i = 2; i <= n; i++)
        if (sumProper(i) == i) res.push_back(i);
    if (res.empty()) cout << "NONE";
    for (size_t i = 0; i < res.size(); i++) cout << res[i] << (i + 1 < res.size() ? " " : "");
    cout << "\n";
    return 0;
}
