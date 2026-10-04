#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n), res(n, -1);
    for (auto &x : a) cin >> x;
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        if (!st.empty()) res[i] = a[st.top()];
        st.push(i);
    }
    for (int i = 0; i < n; i++) cout << res[i] << (i + 1 < n ? " " : "\n");
    return 0;
}
