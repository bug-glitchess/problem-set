#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<long long> st;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        if (t == "+" || t == "-" || t == "*") {
            long long b = st.top();
            st.pop();
            long long a = st.top();
            st.pop();
            if (t == "+") st.push(a + b);
            else if (t == "-") st.push(a - b);
            else st.push(a * b);
        } else {
            st.push(stoll(t));
        }
    }
    cout << st.top() << "\n";
    return 0;
}
