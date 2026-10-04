#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
vector<string> moves;

void hanoi(int n, char from, char to, char via) {
    if (n == 0) return;
    hanoi(n - 1, from, via, to);
    moves.push_back("Move disk " + to_string(n) + " from " + from + " to " + to);
    hanoi(n - 1, via, to, from);
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 'A', 'C', 'B');
    cout << moves.size() << "\n";
    for (auto &m : moves) cout << m << "\n";
    return 0;
}
